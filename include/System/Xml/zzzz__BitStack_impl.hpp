#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__BitStack_def.hpp"
//  Writing Method size for method: ::System::Xml::BitStack._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::BitStack::*)()>(&::System::Xml::BitStack::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x284e538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BitStack*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BitStack.PushBit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::BitStack::*)(bool)>(&::System::Xml::BitStack::PushBit)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x284e558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BitStack*>::get(), "PushBit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BitStack.PopBit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::BitStack::*)()>(&::System::Xml::BitStack::PopBit)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x284e658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BitStack*>::get(), "PopBit",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BitStack.PeekBit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::BitStack::*)()>(&::System::Xml::BitStack::PeekBit)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x284e6c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BitStack*>::get(), "PeekBit",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BitStack.PushCurr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::BitStack::*)()>(&::System::Xml::BitStack::PushCurr)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x284e590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BitStack*>::get(), "PushCurr",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BitStack.PopCurr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::BitStack::*)()>(&::System::Xml::BitStack::PopCurr)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x284e680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BitStack*>::get(), "PopCurr",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& System::Xml::BitStack::__get_bitStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bitStack;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& System::Xml::BitStack::__get_bitStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bitStack;
}
constexpr void System::Xml::BitStack::__set_bitStack(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bitStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::BitStack::__get_stackPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stackPos;
}
constexpr int32_t const& System::Xml::BitStack::__get_stackPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stackPos;
}
constexpr void System::Xml::BitStack::__set_stackPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stackPos = value;
}
constexpr uint32_t& System::Xml::BitStack::__get_curr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curr;
}
constexpr uint32_t const& System::Xml::BitStack::__get_curr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curr;
}
constexpr void System::Xml::BitStack::__set_curr(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curr = value;
}
inline ::System::Xml::BitStack* System::Xml::BitStack::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::BitStack*>());
}
inline void System::Xml::BitStack::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BitStack*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::BitStack::PushBit(bool bit) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BitStack*>::get(), "PushBit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bit);
}
inline bool System::Xml::BitStack::PopBit() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BitStack*>::get(), "PopBit", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::BitStack::PeekBit() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BitStack*>::get(), "PeekBit", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::BitStack::PushCurr() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BitStack*>::get(), "PushCurr",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::BitStack::PopCurr() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BitStack*>::get(), "PopCurr", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::BitStack::BitStack() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
