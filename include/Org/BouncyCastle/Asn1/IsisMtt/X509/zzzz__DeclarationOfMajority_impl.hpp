#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/IsisMtt/X509/zzzz__DeclarationOfMajority_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "Org/BouncyCastle/Asn1/IsisMtt/X509/zzzz__DeclarationOfMajority_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice::__DeclarationOfMajority__Choice(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice::__DeclarationOfMajority__Choice() {}
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice::NotYoungerThan{ static_cast<int32_t>(
    0x0) };
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice::FullAgeAtCountry{ static_cast<int32_t>(
    0x1) };
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice::DateOfBirth{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)(int32_t)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xf77e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)(bool, ::StringW)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xf77f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)(
    ::Org::BouncyCastle::Asn1::DerGeneralizedTime*)>(&::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xf78158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::GetInstance)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xf781dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), "GetInstance",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)(
    ::Org::BouncyCastle::Asn1::Asn1TaggedObject*)>(&::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xf78364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf78424;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice (
    ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)()>(&::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_Type)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xf7842c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), "get_Type",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority.get_NotYoungerThan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_NotYoungerThan)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xf78448;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority.get_FullAgeAtCountry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Sequence* (::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_FullAgeAtCountry)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xf78488;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority.get_DateOfBirth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerGeneralizedTime* (
    ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)()>(&::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_DateOfBirth)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xf784c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), 8));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1TaggedObject*& Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::__get_declaration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___declaration;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1TaggedObject*> const& Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::__get_declaration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___declaration;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::__set_declaration(::Org::BouncyCastle::Asn1::Asn1TaggedObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___declaration)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::New_ctor(int32_t notYoungerThan) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(notYoungerThan));
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor(int32_t notYoungerThan) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, notYoungerThan);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::New_ctor(bool fullAge, ::StringW country) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(fullAge, country));
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor(bool fullAge, ::StringW country) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fullAge, country);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*
Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::New_ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime* dateOfBirth) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(dateOfBirth));
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime* dateOfBirth) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dateOfBirth);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), "GetInstance",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*, false>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(o));
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::ToAsn1Object() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), "ToAsn1Object",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), "get_Type",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IsisMtt::X509::__DeclarationOfMajority__Choice, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_NotYoungerThan() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), "get_NotYoungerThan",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_FullAgeAtCountry() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), "get_FullAgeAtCountry",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Sequence*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_DateOfBirth() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>::get(), "get_DateOfBirth",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerGeneralizedTime*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::DeclarationOfMajority() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
