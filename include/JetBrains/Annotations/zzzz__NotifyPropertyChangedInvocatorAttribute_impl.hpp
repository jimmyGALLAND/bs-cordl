#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__NotifyPropertyChangedInvocatorAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::*)()>(
    &::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eb9fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::*)(::StringW)>(
    &::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2eb9ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute.get_ParameterName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::*)()>(
    &::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::get_ParameterName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eba018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*>::get(), "get_ParameterName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute.set_ParameterName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::*)(::StringW)>(
    &::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::set_ParameterName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eba020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*>::get(), "set_ParameterName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::__get__ParameterName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ParameterName_k__BackingField;
}
constexpr ::StringW const& JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::__get__ParameterName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ParameterName_k__BackingField;
}
constexpr void JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::__set__ParameterName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ParameterName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute* JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*>());
}
inline void JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute* JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::New_ctor(::StringW parameterName) {
  return THROW_UNLESS(::il2cpp_utils::New<::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*>(parameterName));
}
inline void JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::_ctor(::StringW parameterName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameterName);
}
inline ::StringW JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::get_ParameterName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*>::get(), "get_ParameterName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::set_ParameterName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*>::get(), "set_ParameterName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::NotifyPropertyChangedInvocatorAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
