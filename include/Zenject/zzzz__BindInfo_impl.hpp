#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__BindingInheritanceMethods_impl.hpp"
#include "Zenject/zzzz__InvalidBindResponses_impl.hpp"
#include "Zenject/zzzz__ScopeTypes_impl.hpp"
#include "Zenject/zzzz__ToChoices_impl.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Zenject/zzzz__BindingCondition_def.hpp"
//  Writing Method size for method: ::Zenject::BindInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::BindInfo::*)()>(&::Zenject::BindInfo::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2ede974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindInfo.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::BindInfo::*)()>(&::Zenject::BindInfo::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2edeb5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindInfo*>::get(), "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindInfo.SetContextInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::BindInfo::*)(::StringW)>(&::Zenject::BindInfo::SetContextInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2edebb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindInfo*>::get(), "SetContextInfo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::BindInfo.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::BindInfo::*)()>(&::Zenject::BindInfo::Reset)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2edea60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindInfo*>::get(), "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr Zenject::BindInfo::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr bool& Zenject::BindInfo::__get_MarkAsCreationBinding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MarkAsCreationBinding;
}
constexpr bool const& Zenject::BindInfo::__get_MarkAsCreationBinding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MarkAsCreationBinding;
}
constexpr void Zenject::BindInfo::__set_MarkAsCreationBinding(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MarkAsCreationBinding = value;
}
constexpr bool& Zenject::BindInfo::__get_MarkAsUniqueSingleton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MarkAsUniqueSingleton;
}
constexpr bool const& Zenject::BindInfo::__get_MarkAsUniqueSingleton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MarkAsUniqueSingleton;
}
constexpr void Zenject::BindInfo::__set_MarkAsUniqueSingleton(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MarkAsUniqueSingleton = value;
}
constexpr ::System::Object*& Zenject::BindInfo::__get_ConcreteIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConcreteIdentifier;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Zenject::BindInfo::__get_ConcreteIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConcreteIdentifier;
}
constexpr void Zenject::BindInfo::__set_ConcreteIdentifier(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ConcreteIdentifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Zenject::BindInfo::__get_SaveProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SaveProvider;
}
constexpr bool const& Zenject::BindInfo::__get_SaveProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SaveProvider;
}
constexpr void Zenject::BindInfo::__set_SaveProvider(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SaveProvider = value;
}
constexpr bool& Zenject::BindInfo::__get_OnlyBindIfNotBound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnlyBindIfNotBound;
}
constexpr bool const& Zenject::BindInfo::__get_OnlyBindIfNotBound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnlyBindIfNotBound;
}
constexpr void Zenject::BindInfo::__set_OnlyBindIfNotBound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OnlyBindIfNotBound = value;
}
constexpr bool& Zenject::BindInfo::__get_RequireExplicitScope() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RequireExplicitScope;
}
constexpr bool const& Zenject::BindInfo::__get_RequireExplicitScope() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RequireExplicitScope;
}
constexpr void Zenject::BindInfo::__set_RequireExplicitScope(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RequireExplicitScope = value;
}
constexpr ::System::Object*& Zenject::BindInfo::__get_Identifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Identifier;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Zenject::BindInfo::__get_Identifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Identifier;
}
constexpr void Zenject::BindInfo::__set_Identifier(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Identifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Type*>*& Zenject::BindInfo::__get_ContractTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ContractTypes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Type*>*> const& Zenject::BindInfo::__get_ContractTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ContractTypes;
}
constexpr void Zenject::BindInfo::__set_ContractTypes(::System::Collections::Generic::List_1<::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ContractTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::BindingInheritanceMethods& Zenject::BindInfo::__get_BindingInheritanceMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BindingInheritanceMethod;
}
constexpr ::Zenject::BindingInheritanceMethods const& Zenject::BindInfo::__get_BindingInheritanceMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BindingInheritanceMethod;
}
constexpr void Zenject::BindInfo::__set_BindingInheritanceMethod(::Zenject::BindingInheritanceMethods value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___BindingInheritanceMethod = value;
}
constexpr ::Zenject::InvalidBindResponses& Zenject::BindInfo::__get_InvalidBindResponse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvalidBindResponse;
}
constexpr ::Zenject::InvalidBindResponses const& Zenject::BindInfo::__get_InvalidBindResponse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvalidBindResponse;
}
constexpr void Zenject::BindInfo::__set_InvalidBindResponse(::Zenject::InvalidBindResponses value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InvalidBindResponse = value;
}
constexpr bool& Zenject::BindInfo::__get_NonLazy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NonLazy;
}
constexpr bool const& Zenject::BindInfo::__get_NonLazy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NonLazy;
}
constexpr void Zenject::BindInfo::__set_NonLazy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NonLazy = value;
}
constexpr ::Zenject::BindingCondition*& Zenject::BindInfo::__get_Condition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Condition;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::BindingCondition*> const& Zenject::BindInfo::__get_Condition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Condition;
}
constexpr void Zenject::BindInfo::__set_Condition(::Zenject::BindingCondition* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Condition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::ToChoices& Zenject::BindInfo::__get_ToChoice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ToChoice;
}
constexpr ::Zenject::ToChoices const& Zenject::BindInfo::__get_ToChoice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ToChoice;
}
constexpr void Zenject::BindInfo::__set_ToChoice(::Zenject::ToChoices value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ToChoice = value;
}
constexpr ::StringW& Zenject::BindInfo::__get_ContextInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ContextInfo;
}
constexpr ::StringW const& Zenject::BindInfo::__get_ContextInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ContextInfo;
}
constexpr void Zenject::BindInfo::__set_ContextInfo(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ContextInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Type*>*& Zenject::BindInfo::__get_ToTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ToTypes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Type*>*> const& Zenject::BindInfo::__get_ToTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ToTypes;
}
constexpr void Zenject::BindInfo::__set_ToTypes(::System::Collections::Generic::List_1<::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ToTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::ScopeTypes& Zenject::BindInfo::__get_Scope() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Scope;
}
constexpr ::Zenject::ScopeTypes const& Zenject::BindInfo::__get_Scope() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Scope;
}
constexpr void Zenject::BindInfo::__set_Scope(::Zenject::ScopeTypes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Scope = value;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& Zenject::BindInfo::__get_Arguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Arguments;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> const& Zenject::BindInfo::__get_Arguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Arguments;
}
constexpr void Zenject::BindInfo::__set_Arguments(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Arguments)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*& Zenject::BindInfo::__get_InstantiatedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InstantiatedCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*> const& Zenject::BindInfo::__get_InstantiatedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InstantiatedCallback;
}
constexpr void Zenject::BindInfo::__set_InstantiatedCallback(::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InstantiatedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::BindInfo* Zenject::BindInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::BindInfo*>());
}
inline void Zenject::BindInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Zenject::BindInfo::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindInfo*>::get(), "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Zenject::BindInfo::SetContextInfo(::StringW contextInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindInfo*>::get(), "SetContextInfo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, contextInfo);
}
inline void Zenject::BindInfo::Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindInfo*>::get(), "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::BindInfo::BindInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
