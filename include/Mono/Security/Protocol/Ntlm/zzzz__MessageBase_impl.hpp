#pragma once
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmFlags_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__MessageBase_def.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmFlags_def.hpp"
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::MessageBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Protocol::Ntlm::MessageBase::*)(int32_t)>(
    &::Mono::Security::Protocol::Ntlm::MessageBase::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2400ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::MessageBase*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::MessageBase.get_Flags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Protocol::Ntlm::NtlmFlags (::Mono::Security::Protocol::Ntlm::MessageBase::*)()>(
    &::Mono::Security::Protocol::Ntlm::MessageBase::get_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2400f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::MessageBase*>::get(),
                                                                               "get_Flags", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::MessageBase.set_Flags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Protocol::Ntlm::MessageBase::*)(::Mono::Security::Protocol::Ntlm::NtlmFlags)>(
    &::Mono::Security::Protocol::Ntlm::MessageBase::set_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2400f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::MessageBase*>::get(), "set_Flags", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Protocol::Ntlm::NtlmFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::MessageBase.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Security::Protocol::Ntlm::MessageBase::*)()>(
    &::Mono::Security::Protocol::Ntlm::MessageBase::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2400f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::MessageBase*>::get(),
                                                                               "get_Type", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::MessageBase.PrepareMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::Protocol::Ntlm::MessageBase::*)(int32_t)>(
    &::Mono::Security::Protocol::Ntlm::MessageBase::PrepareMessage)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2400f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::MessageBase*>::get(), "PrepareMessage",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::MessageBase.Decode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Protocol::Ntlm::MessageBase::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::Protocol::Ntlm::MessageBase::Decode)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2401028;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::MessageBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::MessageBase*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::MessageBase.CheckHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Protocol::Ntlm::MessageBase::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::Protocol::Ntlm::MessageBase::CheckHeader)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x24011cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::MessageBase*>::get(), "CheckHeader", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::MessageBase.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::Protocol::Ntlm::MessageBase::*)()>(
    &::Mono::Security::Protocol::Ntlm::MessageBase::GetBytes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::MessageBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::MessageBase*>::get(), 5));
    return ___internal_method;
  }
};
constexpr int32_t& Mono::Security::Protocol::Ntlm::MessageBase::__get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____type;
}
constexpr int32_t const& Mono::Security::Protocol::Ntlm::MessageBase::__get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____type;
}
constexpr void Mono::Security::Protocol::Ntlm::MessageBase::__set__type(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____type = value;
}
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags& Mono::Security::Protocol::Ntlm::MessageBase::__get__flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____flags;
}
constexpr ::Mono::Security::Protocol::Ntlm::NtlmFlags const& Mono::Security::Protocol::Ntlm::MessageBase::__get__flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____flags;
}
constexpr void Mono::Security::Protocol::Ntlm::MessageBase::__set__flags(::Mono::Security::Protocol::Ntlm::NtlmFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____flags = value;
}
inline void Mono::Security::Protocol::Ntlm::MessageBase::setStaticF_header(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "header", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::MessageBase*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Protocol::Ntlm::MessageBase::getStaticF_header() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "header",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::MessageBase*>::get>();
}
inline ::Mono::Security::Protocol::Ntlm::MessageBase* Mono::Security::Protocol::Ntlm::MessageBase::New_ctor(int32_t messageType) {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::Protocol::Ntlm::MessageBase*>(messageType));
}
inline void Mono::Security::Protocol::Ntlm::MessageBase::_ctor(int32_t messageType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::MessageBase*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, messageType);
}
inline ::Mono::Security::Protocol::Ntlm::NtlmFlags Mono::Security::Protocol::Ntlm::MessageBase::get_Flags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::MessageBase*>::get(), "get_Flags",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Protocol::Ntlm::NtlmFlags, false>(this, ___internal_method);
}
inline void Mono::Security::Protocol::Ntlm::MessageBase::set_Flags(::Mono::Security::Protocol::Ntlm::NtlmFlags value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::MessageBase*>::get(), "set_Flags", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Protocol::Ntlm::NtlmFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Mono::Security::Protocol::Ntlm::MessageBase::get_Type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::MessageBase*>::get(), "get_Type",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Protocol::Ntlm::MessageBase::PrepareMessage(int32_t messageSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::MessageBase*>::get(), "PrepareMessage",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, messageSize);
}
inline void Mono::Security::Protocol::Ntlm::MessageBase::Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::MessageBase*>::get(), "Decode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline bool Mono::Security::Protocol::Ntlm::MessageBase::CheckHeader(::ArrayW<uint8_t, ::Array<uint8_t>*> message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::MessageBase*>::get(), "CheckHeader", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, message);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Protocol::Ntlm::MessageBase::GetBytes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::MessageBase*>::get(), "GetBytes",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Security::Protocol::Ntlm::MessageBase::MessageBase() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
