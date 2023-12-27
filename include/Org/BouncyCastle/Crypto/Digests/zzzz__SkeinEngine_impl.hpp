#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Digests/zzzz__SkeinEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__ThreefishEngine_def.hpp"
#include "Org/BouncyCastle/Utilities/zzzz__IMemoable_def.hpp"
#include "Org/BouncyCastle/Crypto/Digests/zzzz__SkeinEngine_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__SkeinParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration::*)(int64_t)>(
    &::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xea7cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration.get_Bytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration::get_Bytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xea8284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration*>::get(), "get_Bytes",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration::__get_bytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bytes;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration::__get_bytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bytes;
}
constexpr void Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration::__set_bytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration* Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration::New_ctor(int64_t outputSizeBits) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration*>(outputSizeBits));
}
inline void Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration::_ctor(int64_t outputSizeBits) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outputSizeBits);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration::get_Bytes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration*>::get(), "get_Bytes",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Configuration::__SkeinEngine__Configuration() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter::*)(
    int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xea7c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xea828c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>::get(), "get_Type",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xea8294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>::get(), "get_Value",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter::__get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___type;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter::__get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___type;
}
constexpr void Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter::__set_type(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___type = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter::__get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter::__get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___value;
}
constexpr void Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter::__set_value(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter* Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter::New_ctor(int32_t type,
                                                                                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>(type, value));
}
inline void Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter::_ctor(int32_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, value);
}
inline int32_t Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter::get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>::get(), "get_Type",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter::get_Value() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>::get(), "get_Value",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter::__SkeinEngine__Parameter() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xea829c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::*)(
    ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*)>(&::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::Reset)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xea8338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get(), "Reset", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::Reset)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xea82fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get(), "Reset",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::get_Type)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xea8400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get(), "get_Type",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak.set_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::*)(uint32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::set_Type)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xea8430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get(), "set_Type",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak.get_First
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::get_First)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xea846c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get(), "get_First",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak.set_First
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::*)(bool)>(
    &::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::set_First)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xea83c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get(), "set_First",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak.get_Final
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::get_Final)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xea849c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get(), "get_Final",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak.set_Final
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::*)(bool)>(
    &::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::set_Final)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xea84cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get(), "set_Final",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak.AdvancePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::AdvancePosition)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xea850c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get(), "AdvancePosition",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak.GetWords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint64_t, ::Array<uint64_t>*> (::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::GetWords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xea866c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get(), "GetWords",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::ToString)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xea8674;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::__get_tweak() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___tweak;
}
constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::__get_tweak() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___tweak;
}
constexpr void Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::__set_tweak(::ArrayW<uint64_t, ::Array<uint64_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tweak)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::__get_extendedPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___extendedPosition;
}
constexpr bool const& Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::__get_extendedPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___extendedPosition;
}
constexpr void Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::__set_extendedPosition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___extendedPosition = value;
}
inline ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak* Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>());
}
inline void Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::Reset(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak* tweak) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get(), "Reset", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tweak);
}
inline void Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get(), "Reset",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline uint32_t Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get(), "get_Type",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::set_Type(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get(), "set_Type",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::get_First() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get(), "get_First",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::set_First(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get(), "set_First",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::get_Final() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get(), "get_Final",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::set_Final(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get(), "set_Final",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::AdvancePosition(int32_t advance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get(), "AdvancePosition",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, advance);
}
inline ::ArrayW<uint64_t, ::Array<uint64_t>*> Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::GetWords() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get(), "GetWords",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint64_t, ::Array<uint64_t>*>, false>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::ToString() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*>::get(), "ToString",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak::__SkeinEngine__UbiTweak() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::*)(
    ::Org::BouncyCastle::Crypto::Digests::SkeinEngine*, int32_t)>(&::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xea6f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::*)(
    ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI*)>(&::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::Reset)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xea7158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI*>::get(), "Reset", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xea7f64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI*>::get(), "Reset",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint64_t, ::Array<uint64_t>*>)>(&::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::Update)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xea7e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI*>::get(), "Update", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t, ::Array<uint64_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI.ProcessBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::*)(::ArrayW<uint64_t, ::Array<uint64_t>*>)>(
    &::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::ProcessBlock)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xea887c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI*>::get(), "ProcessBlock", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t, ::Array<uint64_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI.DoFinal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::*)(::ArrayW<uint64_t, ::Array<uint64_t>*>)>(
    &::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::DoFinal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xea7fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI*>::get(), "DoFinal", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t, ::Array<uint64_t>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*& Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::__get_tweak() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___tweak;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak*> const& Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::__get_tweak() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___tweak;
}
constexpr void Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::__set_tweak(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UbiTweak* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tweak)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine*& Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::__get_engine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___engine;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*> const& Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::__get_engine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___engine;
}
constexpr void Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::__set_engine(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___engine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::__get_currentBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___currentBlock;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::__get_currentBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___currentBlock;
}
constexpr void Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::__set_currentBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::__get_currentOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___currentOffset;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::__get_currentOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___currentOffset;
}
constexpr void Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::__set_currentOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___currentOffset = value;
}
constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::__get_message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___message;
}
constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::__get_message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___message;
}
constexpr void Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::__set_message(::ArrayW<uint64_t, ::Array<uint64_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI* Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::New_ctor(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine,
                                                                                                                                  int32_t blockSize) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI*>(engine, blockSize));
}
inline void Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::_ctor(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine, int32_t blockSize) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, engine, blockSize);
}
inline void Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::Reset(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI* ubi) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI*>::get(), "Reset", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ubi);
}
inline void Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::Reset(int32_t type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI*>::get(), "Reset",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::Update(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t offset, int32_t len, ::ArrayW<uint64_t, ::Array<uint64_t>*> output) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI*>::get(), "Update", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t, ::Array<uint64_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, offset, len, output);
}
inline void Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::ProcessBlock(::ArrayW<uint64_t, ::Array<uint64_t>*> output) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI*>::get(), "ProcessBlock", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t, ::Array<uint64_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output);
}
inline void Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::DoFinal(::ArrayW<uint64_t, ::Array<uint64_t>*> output) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI*>::get(), "DoFinal", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t, ::Array<uint64_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, output);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI::__SkeinEngine__UBI() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.InitialState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t, ::ArrayW<uint64_t, ::Array<uint64_t>*>)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::InitialState)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xea6e34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "InitialState", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t, ::Array<uint64_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.VariantIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Digests::SkeinEngine::VariantIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xea6f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "VariantIdentifier", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xea60f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(::Org::BouncyCastle::Crypto::Digests::SkeinEngine*)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xea6318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.CopyIn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(::Org::BouncyCastle::Crypto::Digests::SkeinEngine*)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::CopyIn)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xea7054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "CopyIn", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*> (*)(
        ::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*>,
        ::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*>)>(
        &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::Clone)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xea7204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Clone", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.Copy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::IMemoable* (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::Copy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xea72a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                               "Copy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(::Org::BouncyCastle::Utilities::IMemoable*)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::Reset)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xea63fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Reset", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IMemoable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.get_OutputSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::get_OutputSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xea7304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                               "get_OutputSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.get_BlockSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::get_BlockSize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xea6744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                               "get_BlockSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters*)>(&::Org::BouncyCastle::Crypto::Digests::SkeinEngine::Init)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xea67b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Init", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::SkeinParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.InitParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::InitParams)> {
  constexpr static std::size_t size = 0x678;
  constexpr static std::size_t addrs = 0xea730c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "InitParams", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.CreateInitialState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::CreateInitialState)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xea7984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                               "CreateInitialState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xea6880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                               "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.UbiComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::UbiComplete)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xea7c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "UbiComplete", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.UbiInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::UbiInit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xea7c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "UbiInit",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.UbiFinal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::UbiFinal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xea7f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                               "UbiFinal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.CheckInitialised
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::CheckInitialised)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xea8014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                               "CheckInitialised", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::Update)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xea68d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Update",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::Update)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xea6924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Update", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.DoFinal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Digests::SkeinEngine::DoFinal)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xea6988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "DoFinal", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::SkeinEngine.Output
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::SkeinEngine::*)(
    uint64_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Digests::SkeinEngine::Output)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xea8074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Output", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
constexpr Org::BouncyCastle::Crypto::Digests::SkeinEngine::operator ::Org::BouncyCastle::Utilities::IMemoable*() noexcept {
  return static_cast<::Org::BouncyCastle::Utilities::IMemoable*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__get_threefish() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___threefish;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__get_threefish() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___threefish;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__set_threefish(::Org::BouncyCastle::Crypto::Engines::ThreefishEngine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___threefish)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__get_outputSizeBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___outputSizeBytes;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__get_outputSizeBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___outputSizeBytes;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__set_outputSizeBytes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___outputSizeBytes = value;
}
constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__get_chain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___chain;
}
constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__get_chain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___chain;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__set_chain(::ArrayW<uint64_t, ::Array<uint64_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__get_initialState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___initialState;
}
constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__get_initialState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___initialState;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__set_initialState(::ArrayW<uint64_t, ::Array<uint64_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___initialState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___key;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___key;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__set_key(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*>&
Org::BouncyCastle::Crypto::Digests::SkeinEngine::__get_preMessageParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___preMessageParameters;
}
constexpr ::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*> const&
Org::BouncyCastle::Crypto::Digests::SkeinEngine::__get_preMessageParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___preMessageParameters;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__set_preMessageParameters(
    ::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___preMessageParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*>&
Org::BouncyCastle::Crypto::Digests::SkeinEngine::__get_postMessageParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___postMessageParameters;
}
constexpr ::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*> const&
Org::BouncyCastle::Crypto::Digests::SkeinEngine::__get_postMessageParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___postMessageParameters;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__set_postMessageParameters(
    ::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___postMessageParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI*& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__get_ubi() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ubi;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI*> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__get_ubi() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ubi;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__set_ubi(::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__UBI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ubi)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__get_singleByte() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___singleByte;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Digests::SkeinEngine::__get_singleByte() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___singleByte;
}
constexpr void Org::BouncyCastle::Crypto::Digests::SkeinEngine::__set_singleByte(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___singleByte)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::setStaticF_INITIAL_STATES(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "INITIAL_STATES",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::Digests::SkeinEngine::getStaticF_INITIAL_STATES() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "INITIAL_STATES",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get>();
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::InitialState(int32_t blockSize, int32_t outputSize, ::ArrayW<uint64_t, ::Array<uint64_t>*> state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "InitialState", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t, ::Array<uint64_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, blockSize, outputSize, state);
}
inline int32_t Org::BouncyCastle::Crypto::Digests::SkeinEngine::VariantIdentifier(int32_t blockSizeBytes, int32_t outputSizeBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "VariantIdentifier", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, blockSizeBytes, outputSizeBytes);
}
inline ::Org::BouncyCastle::Crypto::Digests::SkeinEngine* Org::BouncyCastle::Crypto::Digests::SkeinEngine::New_ctor(int32_t blockSizeBits, int32_t outputSizeBits) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(blockSizeBits, outputSizeBits));
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::_ctor(int32_t blockSizeBits, int32_t outputSizeBits) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, blockSizeBits, outputSizeBits);
}
inline ::Org::BouncyCastle::Crypto::Digests::SkeinEngine* Org::BouncyCastle::Crypto::Digests::SkeinEngine::New_ctor(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>(engine));
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::_ctor(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, engine);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::CopyIn(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "CopyIn", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, engine);
}
inline ::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*>
Org::BouncyCastle::Crypto::Digests::SkeinEngine::Clone(
    ::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*> data,
    ::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*> existing) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Clone", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*, ::Array<::Org::BouncyCastle::Crypto::Digests::__SkeinEngine__Parameter*>*>,
                                             false>(nullptr, ___internal_method, data, existing);
}
inline ::Org::BouncyCastle::Utilities::IMemoable* Org::BouncyCastle::Crypto::Digests::SkeinEngine::Copy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Copy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::IMemoable*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::Reset(::Org::BouncyCastle::Utilities::IMemoable* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Reset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IMemoable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline int32_t Org::BouncyCastle::Crypto::Digests::SkeinEngine::get_OutputSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                             "get_OutputSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Digests::SkeinEngine::get_BlockSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                             "get_BlockSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::Init(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Init", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::SkeinParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::InitParams(::System::Collections::IDictionary* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "InitParams", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::CreateInitialState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                             "CreateInitialState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Reset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::UbiComplete(int32_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "UbiComplete", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, value);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::UbiInit(int32_t type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "UbiInit",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::UbiFinal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                             "UbiFinal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::CheckInitialised() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(),
                                                                             "CheckInitialised", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::Update(uint8_t inByte) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Update", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inByte);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::Update(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Update", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inBytes, inOff, len);
}
inline int32_t Org::BouncyCastle::Crypto::Digests::SkeinEngine::DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "DoFinal", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, outBytes, outOff);
}
inline void Org::BouncyCastle::Crypto::Digests::SkeinEngine::Output(uint64_t outputSequence, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff, int32_t outputBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*>::get(), "Output", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outputSequence, outBytes, outOff, outputBytes);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine::SkeinEngine() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
