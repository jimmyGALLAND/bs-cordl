#pragma once
#include "System/Security/Cryptography/zzzz__DSA_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Mono/Security/Cryptography/zzzz__DSAManaged_def.hpp"
#include "System/Security/Cryptography/zzzz__DSAParameters_def.hpp"
#include "Mono/Security/Cryptography/zzzz__DSAManaged_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
#include "Mono/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
//  Writing Method size for method: ::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler::*)(::System::Object*, void*)>(
    &::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x24283a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler::*)(
    ::System::Object*, ::System::EventArgs*)>(&::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24284d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*>::get(), 13));
    return ___internal_method;
  }
};
inline ::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler* Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*>(object, method));
}
inline void Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler::Invoke(::System::Object* sender, ::System::EventArgs* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler::__DSAManaged__KeyGeneratedEventHandler() {}
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)(int32_t)>(&::Mono::Security::Cryptography::DSAManaged::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2426820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)()>(&::Mono::Security::Cryptography::DSAManaged::Finalize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2426900;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)()>(&::Mono::Security::Cryptography::DSAManaged::Generate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x24269a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "Generate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.GenerateKeyPair
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)()>(
    &::Mono::Security::Cryptography::DSAManaged::GenerateKeyPair)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2426f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                                                               "GenerateKeyPair", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Mono::Security::Cryptography::DSAManaged::add)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2427130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "add", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.GenerateParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)(int32_t)>(
    &::Mono::Security::Cryptography::DSAManaged::GenerateParams)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x24269ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "GenerateParams",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.get_Random
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RandomNumberGenerator* (::Mono::Security::Cryptography::DSAManaged::*)()>(
    &::Mono::Security::Cryptography::DSAManaged::get_Random)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x24271d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "get_Random",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.get_KeySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Security::Cryptography::DSAManaged::*)()>(
    &::Mono::Security::Cryptography::DSAManaged::get_KeySize)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2427508;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.get_PublicOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Cryptography::DSAManaged::*)()>(
    &::Mono::Security::Cryptography::DSAManaged::get_PublicOnly)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2427534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                                                               "get_PublicOnly", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.NormalizeArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::Cryptography::DSAManaged::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Mono::Security::Cryptography::DSAManaged::NormalizeArray)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x24275a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "NormalizeArray", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.ExportParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::DSAParameters (::Mono::Security::Cryptography::DSAManaged::*)(bool)>(
    &::Mono::Security::Cryptography::DSAManaged::ExportParameters)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x242764c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.ImportParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)(::System::Security::Cryptography::DSAParameters)>(
    &::Mono::Security::Cryptography::DSAManaged::ImportParameters)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x2427930;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.VerifySignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Cryptography::DSAManaged::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Mono::Security::Cryptography::DSAManaged::VerifySignature)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x2427bd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)(bool)>(&::Mono::Security::Cryptography::DSAManaged::Dispose)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2428098;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.add_KeyGenerated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)(
    ::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*)>(&::Mono::Security::Cryptography::DSAManaged::add_KeyGenerated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2428268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "add_KeyGenerated", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::DSAManaged.remove_KeyGenerated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::DSAManaged::*)(
    ::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*)>(&::Mono::Security::Cryptography::DSAManaged::remove_KeyGenerated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2428304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "remove_KeyGenerated", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Mono::Security::Cryptography::DSAManaged::__get_keypairGenerated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keypairGenerated;
}
constexpr bool const& Mono::Security::Cryptography::DSAManaged::__get_keypairGenerated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keypairGenerated;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__set_keypairGenerated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keypairGenerated = value;
}
constexpr bool& Mono::Security::Cryptography::DSAManaged::__get_m_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_disposed;
}
constexpr bool const& Mono::Security::Cryptography::DSAManaged::__get_m_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_disposed;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__set_m_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_disposed = value;
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::DSAManaged::__get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& Mono::Security::Cryptography::DSAManaged::__get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__set_p(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___p)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::DSAManaged::__get_q() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& Mono::Security::Cryptography::DSAManaged::__get_q() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__set_q(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___q)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::DSAManaged::__get_g() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& Mono::Security::Cryptography::DSAManaged::__get_g() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__set_g(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___g)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::DSAManaged::__get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& Mono::Security::Cryptography::DSAManaged::__get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__set_x(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___x)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::DSAManaged::__get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& Mono::Security::Cryptography::DSAManaged::__get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__set_y(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___y)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::DSAManaged::__get_j() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___j;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& Mono::Security::Cryptography::DSAManaged::__get_j() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___j;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__set_j(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___j)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::DSAManaged::__get_seed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seed;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& Mono::Security::Cryptography::DSAManaged::__get_seed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seed;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__set_seed(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___seed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Mono::Security::Cryptography::DSAManaged::__get_counter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___counter;
}
constexpr int32_t const& Mono::Security::Cryptography::DSAManaged::__get_counter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___counter;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__set_counter(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___counter = value;
}
constexpr bool& Mono::Security::Cryptography::DSAManaged::__get_j_missing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___j_missing;
}
constexpr bool const& Mono::Security::Cryptography::DSAManaged::__get_j_missing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___j_missing;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__set_j_missing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___j_missing = value;
}
constexpr ::System::Security::Cryptography::RandomNumberGenerator*& Mono::Security::Cryptography::DSAManaged::__get_rng() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rng;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::RandomNumberGenerator*> const& Mono::Security::Cryptography::DSAManaged::__get_rng() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rng;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__set_rng(::System::Security::Cryptography::RandomNumberGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rng)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*& Mono::Security::Cryptography::DSAManaged::__get_KeyGenerated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KeyGenerated;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*> const& Mono::Security::Cryptography::DSAManaged::__get_KeyGenerated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KeyGenerated;
}
constexpr void Mono::Security::Cryptography::DSAManaged::__set_KeyGenerated(::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___KeyGenerated)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Mono::Security::Cryptography::DSAManaged* Mono::Security::Cryptography::DSAManaged::New_ctor(int32_t dwKeySize) {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::Cryptography::DSAManaged*>(dwKeySize));
}
inline void Mono::Security::Cryptography::DSAManaged::_ctor(int32_t dwKeySize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dwKeySize);
}
inline void Mono::Security::Cryptography::DSAManaged::Finalize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "Finalize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::DSAManaged::Generate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "Generate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::DSAManaged::GenerateKeyPair() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                                                             "GenerateKeyPair", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::DSAManaged::add(::ArrayW<uint8_t, ::Array<uint8_t>*> a, ::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "add", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, a, b, value);
}
inline void Mono::Security::Cryptography::DSAManaged::GenerateParams(int32_t keyLength) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "GenerateParams",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyLength);
}
inline ::System::Security::Cryptography::RandomNumberGenerator* Mono::Security::Cryptography::DSAManaged::get_Random() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "get_Random",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RandomNumberGenerator*, false>(this, ___internal_method);
}
inline int32_t Mono::Security::Cryptography::DSAManaged::get_KeySize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "get_KeySize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Mono::Security::Cryptography::DSAManaged::get_PublicOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(),
                                                                             "get_PublicOnly", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Cryptography::DSAManaged::NormalizeArray(::ArrayW<uint8_t, ::Array<uint8_t>*> array) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "NormalizeArray", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, array);
}
inline ::System::Security::Cryptography::DSAParameters Mono::Security::Cryptography::DSAManaged::ExportParameters(bool includePrivateParameters) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "ExportParameters",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DSAParameters, false>(this, ___internal_method, includePrivateParameters);
}
inline void Mono::Security::Cryptography::DSAManaged::ImportParameters(::System::Security::Cryptography::DSAParameters parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "ImportParameters", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DSAParameters>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline bool Mono::Security::Cryptography::DSAManaged::VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSignature) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "VerifySignature", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, rgbHash, rgbSignature);
}
inline void Mono::Security::Cryptography::DSAManaged::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "Dispose", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void Mono::Security::Cryptography::DSAManaged::add_KeyGenerated(::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "add_KeyGenerated", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Mono::Security::Cryptography::DSAManaged::remove_KeyGenerated(::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::DSAManaged*>::get(), "remove_KeyGenerated", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Cryptography::__DSAManaged__KeyGeneratedEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::DSAManaged::DSAManaged() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
