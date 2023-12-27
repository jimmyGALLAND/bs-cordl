#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__Deflate_def.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__ZStream_def.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__Tree_def.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__Deflate_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config::*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1164504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::__Deflate__Config::__get_good_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___good_length;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::__Deflate__Config::__get_good_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___good_length;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::__Deflate__Config::__set_good_length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___good_length = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::__Deflate__Config::__get_max_lazy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___max_lazy;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::__Deflate__Config::__get_max_lazy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___max_lazy;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::__Deflate__Config::__set_max_lazy(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___max_lazy = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::__Deflate__Config::__get_nice_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nice_length;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::__Deflate__Config::__get_nice_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nice_length;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::__Deflate__Config::__set_nice_length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___nice_length = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::__Deflate__Config::__get_max_chain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___max_chain;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::__Deflate__Config::__get_max_chain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___max_chain;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::__Deflate__Config::__set_max_chain(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___max_chain = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::__Deflate__Config::__get_func() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___func;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::__Deflate__Config::__get_func() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___func;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::__Deflate__Config::__set_func(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___func = value;
}
inline ::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config* Org::BouncyCastle::Utilities::Zlib::__Deflate__Config::New_ctor(int32_t good_length, int32_t max_lazy, int32_t nice_length,
                                                                                                                                int32_t max_chain, int32_t func) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config*>(good_length, max_lazy, nice_length, max_chain, func));
}
inline void Org::BouncyCastle::Utilities::Zlib::__Deflate__Config::_ctor(int32_t good_length, int32_t max_lazy, int32_t nice_length, int32_t max_chain, int32_t func) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, good_length, max_lazy, nice_length, max_chain, func);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config::__Deflate__Config() {}
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)()>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x1161538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.lm_init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)()>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::lm_init)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x1161680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "lm_init",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.tr_init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)()>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::tr_init)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1161794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "tr_init",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.init_block
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)()>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::init_block)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1161850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(),
                                                                               "init_block", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.pqdownheap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(::ArrayW<int16_t, ::Array<int16_t>*>, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::pqdownheap)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x1161904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "pqdownheap", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int16_t, ::Array<int16_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.smaller
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<int16_t, ::Array<int16_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::smaller)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1161ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "smaller", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int16_t, ::Array<int16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.scan_tree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(::ArrayW<int16_t, ::Array<int16_t>*>, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::scan_tree)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x1161b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "scan_tree", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int16_t, ::Array<int16_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.build_bl_tree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)()>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::build_bl_tree)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x1161cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(),
                                                                               "build_bl_tree", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.send_all_trees
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::send_all_trees)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1161df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "send_all_trees", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.send_tree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(::ArrayW<int16_t, ::Array<int16_t>*>, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::send_tree)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1161fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "send_tree", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int16_t, ::Array<int16_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.put_byte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::put_byte)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x11621c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "put_byte", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.put_byte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(uint8_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::put_byte)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1162208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "put_byte", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.put_short
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::put_short)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1162244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "put_short",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.putShortMSB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::putShortMSB)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x11622ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "putShortMSB",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.send_code
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t, ::ArrayW<int16_t, ::Array<int16_t>*>)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::send_code)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x116217c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "send_code", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int16_t, ::Array<int16_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.send_bits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::send_bits)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1161f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "send_bits", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate._tr_align
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)()>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::_tr_align)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1162314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(),
                                                                               "_tr_align", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate._tr_tally
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::_tr_tally)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x11624c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "_tr_tally", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.compress_block
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(
    ::ArrayW<int16_t, ::Array<int16_t>*>, ::ArrayW<int16_t, ::Array<int16_t>*>)>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::compress_block)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x116276c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "compress_block", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int16_t, ::Array<int16_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int16_t, ::Array<int16_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.set_data_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)()>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::set_data_type)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x11629e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(),
                                                                               "set_data_type", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.bi_flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)()>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::bi_flush)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x11623f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(),
                                                                               "bi_flush", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.bi_windup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)()>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::bi_windup)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1162a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(),
                                                                               "bi_windup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.copy_block
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t, int32_t, bool)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::copy_block)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1162b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "copy_block", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.flush_block_only
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(bool)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::flush_block_only)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1162bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "flush_block_only",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.deflate_stored
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::deflate_stored)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x1162dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "deflate_stored",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate._tr_stored_block
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t, int32_t, bool)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::_tr_stored_block)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11630f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "_tr_stored_block", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate._tr_flush_block
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t, int32_t, bool)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::_tr_flush_block)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x1162c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "_tr_flush_block", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.fill_window
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)()>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::fill_window)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x1162f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(),
                                                                               "fill_window", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.deflate_fast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::deflate_fast)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x1163134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "deflate_fast",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.deflate_slow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::deflate_slow)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x11637fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "deflate_slow",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.longest_match
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::longest_match)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x1163450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "longest_match",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.deflateInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(
    ::Org::BouncyCastle::Utilities::Zlib::ZStream*, int32_t, int32_t)>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::deflateInit)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1163bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "deflateInit", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Zlib::ZStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.deflateInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(::Org::BouncyCastle::Utilities::Zlib::ZStream*, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::deflateInit)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1163d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "deflateInit", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Zlib::ZStream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.deflateInit2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(
    ::Org::BouncyCastle::Utilities::Zlib::ZStream*, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::deflateInit2)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1163bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "deflateInit2", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Zlib::ZStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.deflateReset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(::Org::BouncyCastle::Utilities::Zlib::ZStream*)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::deflateReset)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1163d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "deflateReset", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Zlib::ZStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.deflateEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)()>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::deflateEnd)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1163dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(),
                                                                               "deflateEnd", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.deflateParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(
    ::Org::BouncyCastle::Utilities::Zlib::ZStream*, int32_t, int32_t)>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::deflateParams)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x1163e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "deflateParams", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Zlib::ZStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.deflateSetDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(
    ::Org::BouncyCastle::Utilities::Zlib::ZStream*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::deflateSetDictionary)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x1163fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "deflateSetDictionary", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Zlib::ZStream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.deflate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(::Org::BouncyCastle::Utilities::Zlib::ZStream*, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::deflate)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x116412c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "deflate", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Zlib::ZStream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream*& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_strm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strm;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::ZStream*> const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_strm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strm;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_strm(::Org::BouncyCastle::Utilities::Zlib::ZStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___strm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___status;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___status;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_status(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___status = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_pending_buf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pending_buf;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_pending_buf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pending_buf;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_pending_buf(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pending_buf)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_pending_out() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pending_out;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_pending_out() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pending_out;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_pending_out(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___pending_out = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_pending() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pending;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_pending() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pending;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_pending(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___pending = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_noheader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___noheader;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_noheader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___noheader;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_noheader(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___noheader = value;
}
constexpr uint8_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_data_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___data_type;
}
constexpr uint8_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_data_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___data_type;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_data_type(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___data_type = value;
}
constexpr uint8_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___method;
}
constexpr uint8_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___method;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_method(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___method = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_last_flush() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___last_flush;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_last_flush() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___last_flush;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_last_flush(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___last_flush = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_w_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___w_size;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_w_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___w_size;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_w_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___w_size = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_w_bits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___w_bits;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_w_bits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___w_bits;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_w_bits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___w_bits = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_w_mask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___w_mask;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_w_mask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___w_mask;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_w_mask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___w_mask = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_window() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___window;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_window() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___window;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_window(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___window)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_window_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___window_size;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_window_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___window_size;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_window_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___window_size = value;
}
constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_prev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___prev;
}
constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_prev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___prev;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_prev(::ArrayW<int16_t, ::Array<int16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prev)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_head() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___head;
}
constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_head() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___head;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_head(::ArrayW<int16_t, ::Array<int16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___head)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_ins_h() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ins_h;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_ins_h() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ins_h;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_ins_h(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___ins_h = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_hash_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hash_size;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_hash_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hash_size;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_hash_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___hash_size = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_hash_bits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hash_bits;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_hash_bits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hash_bits;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_hash_bits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___hash_bits = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_hash_mask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hash_mask;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_hash_mask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hash_mask;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_hash_mask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___hash_mask = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_hash_shift() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hash_shift;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_hash_shift() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hash_shift;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_hash_shift(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___hash_shift = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_block_start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___block_start;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_block_start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___block_start;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_block_start(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___block_start = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_match_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___match_length;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_match_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___match_length;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_match_length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___match_length = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_prev_match() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___prev_match;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_prev_match() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___prev_match;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_prev_match(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___prev_match = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_match_available() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___match_available;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_match_available() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___match_available;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_match_available(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___match_available = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_strstart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strstart;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_strstart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strstart;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_strstart(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___strstart = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_match_start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___match_start;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_match_start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___match_start;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_match_start(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___match_start = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_lookahead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lookahead;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_lookahead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lookahead;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_lookahead(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___lookahead = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_prev_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___prev_length;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_prev_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___prev_length;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_prev_length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___prev_length = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_max_chain_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___max_chain_length;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_max_chain_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___max_chain_length;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_max_chain_length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___max_chain_length = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_max_lazy_match() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___max_lazy_match;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_max_lazy_match() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___max_lazy_match;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_max_lazy_match(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___max_lazy_match = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_level() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___level;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_level() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___level;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_level(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___level = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_strategy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strategy;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_strategy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strategy;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_strategy(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___strategy = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_good_match() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___good_match;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_good_match() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___good_match;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_good_match(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___good_match = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_nice_match() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nice_match;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_nice_match() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nice_match;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_nice_match(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___nice_match = value;
}
constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_dyn_ltree() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___dyn_ltree;
}
constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_dyn_ltree() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___dyn_ltree;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_dyn_ltree(::ArrayW<int16_t, ::Array<int16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dyn_ltree)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_dyn_dtree() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___dyn_dtree;
}
constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_dyn_dtree() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___dyn_dtree;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_dyn_dtree(::ArrayW<int16_t, ::Array<int16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dyn_dtree)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_bl_tree() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bl_tree;
}
constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_bl_tree() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bl_tree;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_bl_tree(::ArrayW<int16_t, ::Array<int16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bl_tree)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Utilities::Zlib::Tree*& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_l_desc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___l_desc;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::Tree*> const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_l_desc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___l_desc;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_l_desc(::Org::BouncyCastle::Utilities::Zlib::Tree* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___l_desc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Utilities::Zlib::Tree*& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_d_desc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___d_desc;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::Tree*> const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_d_desc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___d_desc;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_d_desc(::Org::BouncyCastle::Utilities::Zlib::Tree* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___d_desc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Utilities::Zlib::Tree*& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_bl_desc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bl_desc;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::Tree*> const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_bl_desc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bl_desc;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_bl_desc(::Org::BouncyCastle::Utilities::Zlib::Tree* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bl_desc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_bl_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bl_count;
}
constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_bl_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bl_count;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_bl_count(::ArrayW<int16_t, ::Array<int16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bl_count)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_heap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___heap;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_heap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___heap;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_heap(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___heap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_heap_len() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___heap_len;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_heap_len() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___heap_len;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_heap_len(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___heap_len = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_heap_max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___heap_max;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_heap_max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___heap_max;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_heap_max(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___heap_max = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___depth;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___depth;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_depth(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___depth)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_l_buf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___l_buf;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_l_buf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___l_buf;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_l_buf(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___l_buf = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_lit_bufsize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lit_bufsize;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_lit_bufsize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lit_bufsize;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_lit_bufsize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___lit_bufsize = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_last_lit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___last_lit;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_last_lit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___last_lit;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_last_lit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___last_lit = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_d_buf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___d_buf;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_d_buf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___d_buf;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_d_buf(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___d_buf = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_opt_len() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___opt_len;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_opt_len() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___opt_len;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_opt_len(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___opt_len = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_static_len() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___static_len;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_static_len() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___static_len;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_static_len(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___static_len = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_matches() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___matches;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_matches() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___matches;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_matches(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___matches = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_last_eob_len() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___last_eob_len;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_last_eob_len() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___last_eob_len;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_last_eob_len(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___last_eob_len = value;
}
constexpr uint32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_bi_buf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bi_buf;
}
constexpr uint32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_bi_buf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bi_buf;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_bi_buf(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___bi_buf = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_bi_valid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bi_valid;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__get_bi_valid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bi_valid;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__set_bi_valid(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___bi_valid = value;
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::setStaticF_config_table(
    ::ArrayW<::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config*, ::Array<::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config*, ::Array<::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config*>*>, "config_table",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get>(
      std::forward<::ArrayW<::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config*, ::Array<::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config*>*>>(value));
}
inline ::ArrayW<::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config*, ::Array<::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config*>*>
Org::BouncyCastle::Utilities::Zlib::Deflate::getStaticF_config_table() {
  return ::cordl_internals::getStaticField<::ArrayW<::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config*, ::Array<::Org::BouncyCastle::Utilities::Zlib::__Deflate__Config*>*>, "config_table",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get>();
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::setStaticF_z_errmsg(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "z_errmsg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> Org::BouncyCastle::Utilities::Zlib::Deflate::getStaticF_z_errmsg() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "z_errmsg",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get>();
}
inline ::Org::BouncyCastle::Utilities::Zlib::Deflate* Org::BouncyCastle::Utilities::Zlib::Deflate::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Utilities::Zlib::Deflate*>());
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::lm_init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "lm_init",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::tr_init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "tr_init",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::init_block() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(),
                                                                             "init_block", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::pqdownheap(::ArrayW<int16_t, ::Array<int16_t>*> tree, int32_t k) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "pqdownheap", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int16_t, ::Array<int16_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tree, k);
}
inline bool Org::BouncyCastle::Utilities::Zlib::Deflate::smaller(::ArrayW<int16_t, ::Array<int16_t>*> tree, int32_t n, int32_t m, ::ArrayW<uint8_t, ::Array<uint8_t>*> depth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "smaller", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int16_t, ::Array<int16_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, tree, n, m, depth);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::scan_tree(::ArrayW<int16_t, ::Array<int16_t>*> tree, int32_t max_code) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "scan_tree", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int16_t, ::Array<int16_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tree, max_code);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::build_bl_tree() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(),
                                                                             "build_bl_tree", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::send_all_trees(int32_t lcodes, int32_t dcodes, int32_t blcodes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "send_all_trees", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lcodes, dcodes, blcodes);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::send_tree(::ArrayW<int16_t, ::Array<int16_t>*> tree, int32_t max_code) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "send_tree", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int16_t, ::Array<int16_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tree, max_code);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::put_byte(::ArrayW<uint8_t, ::Array<uint8_t>*> p, int32_t start, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "put_byte", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p, start, len);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::put_byte(uint8_t c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "put_byte", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::put_short(int32_t w) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "put_short", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, w);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::putShortMSB(int32_t b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "putShortMSB",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::send_code(int32_t c, ::ArrayW<int16_t, ::Array<int16_t>*> tree) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "send_code", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int16_t, ::Array<int16_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c, tree);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::send_bits(int32_t val, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "send_bits", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val, length);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::_tr_align() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "_tr_align",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Utilities::Zlib::Deflate::_tr_tally(int32_t dist, int32_t lc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "_tr_tally", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, dist, lc);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::compress_block(::ArrayW<int16_t, ::Array<int16_t>*> ltree, ::ArrayW<int16_t, ::Array<int16_t>*> dtree) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "compress_block", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int16_t, ::Array<int16_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int16_t, ::Array<int16_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ltree, dtree);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::set_data_type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(),
                                                                             "set_data_type", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::bi_flush() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "bi_flush",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::bi_windup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "bi_windup",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::copy_block(int32_t buf, int32_t len, bool header) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "copy_block", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buf, len, header);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::flush_block_only(bool eof) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "flush_block_only",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eof);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::deflate_stored(int32_t flush) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "deflate_stored",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, flush);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::_tr_stored_block(int32_t buf, int32_t stored_len, bool eof) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "_tr_stored_block", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buf, stored_len, eof);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::_tr_flush_block(int32_t buf, int32_t stored_len, bool eof) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "_tr_flush_block", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buf, stored_len, eof);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::fill_window() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(),
                                                                             "fill_window", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::deflate_fast(int32_t flush) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "deflate_fast",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, flush);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::deflate_slow(int32_t flush) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "deflate_slow",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, flush);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::longest_match(int32_t cur_match) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "longest_match",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, cur_match);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::deflateInit(::Org::BouncyCastle::Utilities::Zlib::ZStream* strm, int32_t level, int32_t bits) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "deflateInit", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Zlib::ZStream*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, strm, level, bits);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::deflateInit(::Org::BouncyCastle::Utilities::Zlib::ZStream* strm, int32_t level) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "deflateInit", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Zlib::ZStream*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, strm, level);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::deflateInit2(::Org::BouncyCastle::Utilities::Zlib::ZStream* strm, int32_t level, int32_t method, int32_t windowBits, int32_t memLevel,
                                                                         int32_t strategy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "deflateInit2", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Zlib::ZStream*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, strm, level, method, windowBits, memLevel, strategy);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::deflateReset(::Org::BouncyCastle::Utilities::Zlib::ZStream* strm) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "deflateReset", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Zlib::ZStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, strm);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::deflateEnd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(),
                                                                             "deflateEnd", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::deflateParams(::Org::BouncyCastle::Utilities::Zlib::ZStream* strm, int32_t _level, int32_t _strategy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "deflateParams", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Zlib::ZStream*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, strm, _level, _strategy);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::deflateSetDictionary(::Org::BouncyCastle::Utilities::Zlib::ZStream* strm, ::ArrayW<uint8_t, ::Array<uint8_t>*> dictionary,
                                                                                 int32_t dictLength) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "deflateSetDictionary", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Zlib::ZStream*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, strm, dictionary, dictLength);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::deflate(::Org::BouncyCastle::Utilities::Zlib::ZStream* strm, int32_t flush) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Zlib::Deflate*>::get(), "deflate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Zlib::ZStream*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, strm, flush);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Zlib::Deflate::Deflate() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
