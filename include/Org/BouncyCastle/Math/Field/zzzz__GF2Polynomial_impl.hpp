#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__GF2Polynomial_def.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__IPolynomial_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::GF2Polynomial._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::Field::GF2Polynomial::*)(::ArrayW<int32_t, ::Array<int32_t>*>)>(
    &::Org::BouncyCastle::Math::Field::GF2Polynomial::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x105b258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::GF2Polynomial*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::GF2Polynomial.get_Degree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Math::Field::GF2Polynomial::*)()>(
    &::Org::BouncyCastle::Math::Field::GF2Polynomial::get_Degree)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x105b93c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::GF2Polynomial*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::GF2Polynomial*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::GF2Polynomial.GetExponentsPresent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::Org::BouncyCastle::Math::Field::GF2Polynomial::*)()>(
    &::Org::BouncyCastle::Math::Field::GF2Polynomial::GetExponentsPresent)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x105b970;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::GF2Polynomial*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::GF2Polynomial*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::GF2Polynomial.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Math::Field::GF2Polynomial::*)(::System::Object*)>(
    &::Org::BouncyCastle::Math::Field::GF2Polynomial::Equals)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x105b9cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::GF2Polynomial*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::GF2Polynomial*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::GF2Polynomial.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Math::Field::GF2Polynomial::*)()>(
    &::Org::BouncyCastle::Math::Field::GF2Polynomial::GetHashCode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x105baa4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::GF2Polynomial*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::GF2Polynomial*>::get(), 2));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Math::Field::IPolynomial"
constexpr Org::BouncyCastle::Math::Field::GF2Polynomial::operator ::Org::BouncyCastle::Math::Field::IPolynomial*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::Field::IPolynomial*>(static_cast<void*>(this));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& Org::BouncyCastle::Math::Field::GF2Polynomial::__get_exponents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exponents;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& Org::BouncyCastle::Math::Field::GF2Polynomial::__get_exponents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exponents;
}
constexpr void Org::BouncyCastle::Math::Field::GF2Polynomial::__set_exponents(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___exponents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Math::Field::GF2Polynomial* Org::BouncyCastle::Math::Field::GF2Polynomial::New_ctor(::ArrayW<int32_t, ::Array<int32_t>*> exponents) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Math::Field::GF2Polynomial*>(exponents));
}
inline void Org::BouncyCastle::Math::Field::GF2Polynomial::_ctor(::ArrayW<int32_t, ::Array<int32_t>*> exponents) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::GF2Polynomial*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exponents);
}
inline int32_t Org::BouncyCastle::Math::Field::GF2Polynomial::get_Degree() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::GF2Polynomial*>::get(),
                                                                             "get_Degree", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> Org::BouncyCastle::Math::Field::GF2Polynomial::GetExponentsPresent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::GF2Polynomial*>::get(),
                                                                             "GetExponentsPresent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Math::Field::GF2Polynomial::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::GF2Polynomial*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t Org::BouncyCastle::Math::Field::GF2Polynomial::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::GF2Polynomial*>::get(),
                                                                             "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::Field::GF2Polynomial::GF2Polynomial() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
