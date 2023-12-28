#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsCompressedDataGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsCompressedData_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsCompressedDataGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsCompressedDataGenerator::*)()>(
    &::Org::BouncyCastle::Cms::CmsCompressedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11dcb44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsCompressedDataGenerator*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsCompressedDataGenerator.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::CmsCompressedData* (
    ::Org::BouncyCastle::Cms::CmsCompressedDataGenerator::*)(::Org::BouncyCastle::Cms::CmsProcessable*, ::StringW)>(&::Org::BouncyCastle::Cms::CmsCompressedDataGenerator::Generate)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x11dcb4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsCompressedDataGenerator*>::get(), "Generate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsProcessable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Cms::CmsCompressedDataGenerator* Org::BouncyCastle::Cms::CmsCompressedDataGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsCompressedDataGenerator*>());
}
inline void Org::BouncyCastle::Cms::CmsCompressedDataGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsCompressedDataGenerator*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsCompressedData* Org::BouncyCastle::Cms::CmsCompressedDataGenerator::Generate(::Org::BouncyCastle::Cms::CmsProcessable* content, ::StringW compressionOid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsCompressedDataGenerator*>::get(), "Generate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsProcessable*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsCompressedData*, false>(this, ___internal_method, content, compressionOid);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsCompressedDataGenerator::CmsCompressedDataGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
