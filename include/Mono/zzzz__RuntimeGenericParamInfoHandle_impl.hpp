#pragma once
#include "Mono/zzzz__RuntimeGenericParamInfoHandle_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Mono/zzzz__RuntimeStructs_def.hpp"
#include "System/Reflection/zzzz__GenericParameterAttributes_def.hpp"
//  Writing Method size for method: ::Mono::RuntimeGenericParamInfoHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::RuntimeGenericParamInfoHandle::*)(void*)>(&::Mono::RuntimeGenericParamInfoHandle::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2412678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGenericParamInfoHandle>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGenericParamInfoHandle.get_Constraints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (::Mono::RuntimeGenericParamInfoHandle::*)()>(
    &::Mono::RuntimeGenericParamInfoHandle::get_Constraints)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2412698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGenericParamInfoHandle>::get(), "get_Constraints",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGenericParamInfoHandle.get_Attributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::GenericParameterAttributes (::Mono::RuntimeGenericParamInfoHandle::*)()>(
    &::Mono::RuntimeGenericParamInfoHandle::get_Attributes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24127c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGenericParamInfoHandle>::get(), "get_Attributes",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGenericParamInfoHandle.GetConstraints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (::Mono::RuntimeGenericParamInfoHandle::*)()>(
    &::Mono::RuntimeGenericParamInfoHandle::GetConstraints)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x241269c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGenericParamInfoHandle>::get(), "GetConstraints",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGenericParamInfoHandle.GetConstraintsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::RuntimeGenericParamInfoHandle::*)()>(&::Mono::RuntimeGenericParamInfoHandle::GetConstraintsCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x24127e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGenericParamInfoHandle>::get(),
                                                                               "GetConstraintsCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void Mono::RuntimeGenericParamInfoHandle::_ctor(void* ptr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGenericParamInfoHandle>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ptr);
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> Mono::RuntimeGenericParamInfoHandle::get_Constraints() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGenericParamInfoHandle>::get(), "get_Constraints",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(this, ___internal_method);
}
inline ::System::Reflection::GenericParameterAttributes Mono::RuntimeGenericParamInfoHandle::get_Attributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGenericParamInfoHandle>::get(), "get_Attributes",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::GenericParameterAttributes, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> Mono::RuntimeGenericParamInfoHandle::GetConstraints() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGenericParamInfoHandle>::get(), "GetConstraints",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(this, ___internal_method);
}
inline int32_t Mono::RuntimeGenericParamInfoHandle::GetConstraintsCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGenericParamInfoHandle>::get(),
                                                                             "GetConstraintsCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "value", ty: "::cordl_internals::Ptr<::Mono::__RuntimeStructs__GenericParamInfo>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::Mono::RuntimeGenericParamInfoHandle::RuntimeGenericParamInfoHandle(::cordl_internals::Ptr<::Mono::__RuntimeStructs__GenericParamInfo> value) noexcept {
  this->value = value;
}
// Ctor Parameters []
constexpr ::Mono::RuntimeGenericParamInfoHandle::RuntimeGenericParamInfoHandle() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
