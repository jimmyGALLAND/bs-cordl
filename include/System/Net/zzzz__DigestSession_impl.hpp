#pragma once
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__DigestSession_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
#include "System/Net/zzzz__DigestHeaderParser_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Net/zzzz__Authorization_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::System::Net::DigestSession._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::DigestSession::*)()>(&::System::Net::DigestSession::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x29bdd64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.get_Algorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::DigestSession::*)()>(&::System::Net::DigestSession::get_Algorithm)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29bddd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "get_Algorithm",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.get_Realm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::DigestSession::*)()>(&::System::Net::DigestSession::get_Realm)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29bddec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "get_Realm",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.get_Nonce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::DigestSession::*)()>(&::System::Net::DigestSession::get_Nonce)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29bde04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "get_Nonce",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.get_Opaque
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::DigestSession::*)()>(&::System::Net::DigestSession::get_Opaque)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29bde1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "get_Opaque",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.get_QOP
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::DigestSession::*)()>(&::System::Net::DigestSession::get_QOP)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29bde34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "get_QOP",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.get_CNonce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::DigestSession::*)()>(&::System::Net::DigestSession::get_CNonce)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x29bde4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "get_CNonce",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::DigestSession::*)(::StringW)>(&::System::Net::DigestSession::Parse)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x29bdf40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "Parse", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.HashToHexString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::DigestSession::*)(::StringW)>(&::System::Net::DigestSession::HashToHexString)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x29be020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "HashToHexString", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.HA1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::DigestSession::*)(::StringW, ::StringW)>(&::System::Net::DigestSession::HA1)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x29be170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "HA1", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.HA2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::DigestSession::*)(::System::Net::HttpWebRequest*)>(&::System::Net::DigestSession::HA2)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x29be294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "HA2", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.Response
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::DigestSession::*)(::StringW, ::StringW, ::System::Net::HttpWebRequest*)>(
    &::System::Net::DigestSession::Response)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x29be364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "Response", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.Authenticate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Net::Authorization* (::System::Net::DigestSession::*)(::System::Net::WebRequest*, ::System::Net::ICredentials*)>(&::System::Net::DigestSession::Authenticate)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x29be4c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "Authenticate", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.get_LastUse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Net::DigestSession::*)()>(&::System::Net::DigestSession::get_LastUse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29beaa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "get_LastUse",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& System::Net::DigestSession::__get_lastUse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lastUse;
}
constexpr ::System::DateTime const& System::Net::DigestSession::__get_lastUse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lastUse;
}
constexpr void System::Net::DigestSession::__set_lastUse(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___lastUse = value;
}
constexpr int32_t& System::Net::DigestSession::__get__nc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____nc;
}
constexpr int32_t const& System::Net::DigestSession::__get__nc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____nc;
}
constexpr void System::Net::DigestSession::__set__nc(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____nc = value;
}
constexpr ::System::Security::Cryptography::HashAlgorithm*& System::Net::DigestSession::__get_hash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hash;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::HashAlgorithm*> const& System::Net::DigestSession::__get_hash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hash;
}
constexpr void System::Net::DigestSession::__set_hash(::System::Security::Cryptography::HashAlgorithm* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hash)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::DigestHeaderParser*& System::Net::DigestSession::__get_parser() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___parser;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::DigestHeaderParser*> const& System::Net::DigestSession::__get_parser() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___parser;
}
constexpr void System::Net::DigestSession::__set_parser(::System::Net::DigestHeaderParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parser)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::DigestSession::__get__cnonce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cnonce;
}
constexpr ::StringW const& System::Net::DigestSession::__get__cnonce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cnonce;
}
constexpr void System::Net::DigestSession::__set__cnonce(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cnonce)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Net::DigestSession::setStaticF_rng(::System::Security::Cryptography::RandomNumberGenerator* value) {
  ::cordl_internals::setStaticField<::System::Security::Cryptography::RandomNumberGenerator*, "rng", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get>(
      std::forward<::System::Security::Cryptography::RandomNumberGenerator*>(value));
}
inline ::System::Security::Cryptography::RandomNumberGenerator* System::Net::DigestSession::getStaticF_rng() {
  return ::cordl_internals::getStaticField<::System::Security::Cryptography::RandomNumberGenerator*, "rng",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get>();
}
inline ::System::Net::DigestSession* System::Net::DigestSession::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::DigestSession*>());
}
inline void System::Net::DigestSession::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Net::DigestSession::get_Algorithm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "get_Algorithm",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Net::DigestSession::get_Realm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "get_Realm",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Net::DigestSession::get_Nonce() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "get_Nonce",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Net::DigestSession::get_Opaque() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "get_Opaque",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Net::DigestSession::get_QOP() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "get_QOP",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Net::DigestSession::get_CNonce() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "get_CNonce",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Net::DigestSession::Parse(::StringW challenge) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "Parse", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, challenge);
}
inline ::StringW System::Net::DigestSession::HashToHexString(::StringW toBeHashed) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "HashToHexString", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, toBeHashed);
}
inline ::StringW System::Net::DigestSession::HA1(::StringW username, ::StringW password) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "HA1", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, username, password);
}
inline ::StringW System::Net::DigestSession::HA2(::System::Net::HttpWebRequest* webRequest) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "HA2", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, webRequest);
}
inline ::StringW System::Net::DigestSession::Response(::StringW username, ::StringW password, ::System::Net::HttpWebRequest* webRequest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "Response", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, username, password, webRequest);
}
inline ::System::Net::Authorization* System::Net::DigestSession::Authenticate(::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "Authenticate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*, false>(this, ___internal_method, webRequest, credentials);
}
inline ::System::DateTime System::Net::DigestSession::get_LastUse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession*>::get(), "get_LastUse",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::DigestSession::DigestSession() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
