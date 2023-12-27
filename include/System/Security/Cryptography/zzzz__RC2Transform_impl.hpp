#pragma once
#include "Mono/Security/Cryptography/zzzz__SymmetricTransform_impl.hpp"
#include "System/Security/Cryptography/zzzz__RC2Transform_def.hpp"
#include "System/Security/Cryptography/zzzz__RC2_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RC2Transform._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RC2Transform::*)(
    ::System::Security::Cryptography::RC2*, bool, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::System::Security::Cryptography::RC2Transform::_ctor)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x2471dc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RC2Transform*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RC2*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RC2Transform.ECB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RC2Transform::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::System::Security::Cryptography::RC2Transform::ECB)> {
  constexpr static std::size_t size = 0x930;
  constexpr static std::size_t addrs = 0x2472308;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RC2Transform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RC2Transform*>::get(), 15));
    return ___internal_method;
  }
};
constexpr uint16_t& System::Security::Cryptography::RC2Transform::__get_R0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___R0;
}
constexpr uint16_t const& System::Security::Cryptography::RC2Transform::__get_R0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___R0;
}
constexpr void System::Security::Cryptography::RC2Transform::__set_R0(uint16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___R0 = value;
}
constexpr uint16_t& System::Security::Cryptography::RC2Transform::__get_R1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___R1;
}
constexpr uint16_t const& System::Security::Cryptography::RC2Transform::__get_R1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___R1;
}
constexpr void System::Security::Cryptography::RC2Transform::__set_R1(uint16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___R1 = value;
}
constexpr uint16_t& System::Security::Cryptography::RC2Transform::__get_R2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___R2;
}
constexpr uint16_t const& System::Security::Cryptography::RC2Transform::__get_R2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___R2;
}
constexpr void System::Security::Cryptography::RC2Transform::__set_R2(uint16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___R2 = value;
}
constexpr uint16_t& System::Security::Cryptography::RC2Transform::__get_R3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___R3;
}
constexpr uint16_t const& System::Security::Cryptography::RC2Transform::__get_R3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___R3;
}
constexpr void System::Security::Cryptography::RC2Transform::__set_R3(uint16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___R3 = value;
}
constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*>& System::Security::Cryptography::RC2Transform::__get_K() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___K;
}
constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*> const& System::Security::Cryptography::RC2Transform::__get_K() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___K;
}
constexpr void System::Security::Cryptography::RC2Transform::__set_K(::ArrayW<uint16_t, ::Array<uint16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___K)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Security::Cryptography::RC2Transform::__get_j() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___j;
}
constexpr int32_t const& System::Security::Cryptography::RC2Transform::__get_j() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___j;
}
constexpr void System::Security::Cryptography::RC2Transform::__set_j(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___j = value;
}
inline void System::Security::Cryptography::RC2Transform::setStaticF_pitable(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "pitable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RC2Transform*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::RC2Transform::getStaticF_pitable() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "pitable",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RC2Transform*>::get>();
}
inline ::System::Security::Cryptography::RC2Transform* System::Security::Cryptography::RC2Transform::New_ctor(::System::Security::Cryptography::RC2* rc2Algo, bool encryption,
                                                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Cryptography::RC2Transform*>(rc2Algo, encryption, key, iv));
}
inline void System::Security::Cryptography::RC2Transform::_ctor(::System::Security::Cryptography::RC2* rc2Algo, bool encryption, ::ArrayW<uint8_t, ::Array<uint8_t>*> key,
                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> iv) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RC2Transform*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RC2*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rc2Algo, encryption, key, iv);
}
inline void System::Security::Cryptography::RC2Transform::ECB(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RC2Transform*>::get(), "ECB", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, output);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RC2Transform::RC2Transform() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
