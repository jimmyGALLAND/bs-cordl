#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/zzzz__Exportable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::Exportable.BooleanToByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(bool)>(&::Org::BouncyCastle::Bcpg::Sig::Exportable::BooleanToByteArray)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x11c7460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Sig::Exportable*>::get(), "BooleanToByteArray",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::Exportable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::Sig::Exportable::*)(bool, bool, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Bcpg::Sig::Exportable::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x11c74cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Sig::Exportable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::Exportable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::Sig::Exportable::*)(bool, bool)>(
    &::Org::BouncyCastle::Bcpg::Sig::Exportable::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x11c7514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Sig::Exportable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::Exportable.IsExportable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Bcpg::Sig::Exportable::*)()>(&::Org::BouncyCastle::Bcpg::Sig::Exportable::IsExportable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x11c7560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Sig::Exportable*>::get(),
                                                                               "IsExportable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::Sig::Exportable::BooleanToByteArray(bool val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Sig::Exportable*>::get(), "BooleanToByteArray",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, val);
}
inline ::Org::BouncyCastle::Bcpg::Sig::Exportable* Org::BouncyCastle::Bcpg::Sig::Exportable::New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::Sig::Exportable*>(critical, isLongLength, data));
}
inline void Org::BouncyCastle::Bcpg::Sig::Exportable::_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Sig::Exportable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, critical, isLongLength, data);
}
inline ::Org::BouncyCastle::Bcpg::Sig::Exportable* Org::BouncyCastle::Bcpg::Sig::Exportable::New_ctor(bool critical, bool isExportable) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::Sig::Exportable*>(critical, isExportable));
}
inline void Org::BouncyCastle::Bcpg::Sig::Exportable::_ctor(bool critical, bool isExportable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Sig::Exportable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, critical, isExportable);
}
inline bool Org::BouncyCastle::Bcpg::Sig::Exportable::IsExportable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Sig::Exportable*>::get(), "IsExportable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::Sig::Exportable::Exportable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
