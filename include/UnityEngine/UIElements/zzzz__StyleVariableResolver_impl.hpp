#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariableResolver_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariableResolver_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariableContext_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyValue_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__StyleSyntaxParser_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariableResolver_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyValueMatcher_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleProperty_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__StyleVariableResolver__Result::__StyleVariableResolver__Result(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__StyleVariableResolver__Result::__StyleVariableResolver__Result() {}
constexpr ::UnityEngine::UIElements::__StyleVariableResolver__Result UnityEngine::UIElements::__StyleVariableResolver__Result::Valid{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::__StyleVariableResolver__Result UnityEngine::UIElements::__StyleVariableResolver__Result::Invalid{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::__StyleVariableResolver__Result UnityEngine::UIElements::__StyleVariableResolver__Result::NotFound{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "sheet", ty: "::UnityEngine::UIElements::StyleSheet*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "handles", ty:
// "::ArrayW<::UnityEngine::UIElements::StyleValueHandle,::Array<::UnityEngine::UIElements::StyleValueHandle>*>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext::__StyleVariableResolver__ResolveContext(
    ::UnityEngine::UIElements::StyleSheet* sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> handles) noexcept {
  this->sheet = sheet;
  this->handles = handles;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext::__StyleVariableResolver__ResolveContext() {}
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.get_currentSheet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheet* (::UnityEngine::UIElements::StyleVariableResolver::*)()>(
    &::UnityEngine::UIElements::StyleVariableResolver::get_currentSheet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e6a1b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(),
                                                                               "get_currentSheet", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.get_currentHandles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> (
    ::UnityEngine::UIElements::StyleVariableResolver::*)()>(&::UnityEngine::UIElements::StyleVariableResolver::get_currentHandles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e6a1c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(),
                                                                               "get_currentHandles", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.get_resolvedValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* (
    ::UnityEngine::UIElements::StyleVariableResolver::*)()>(&::UnityEngine::UIElements::StyleVariableResolver::get_resolvedValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e6a1c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(),
                                                                               "get_resolvedValues", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.get_variableContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleVariableContext* (::UnityEngine::UIElements::StyleVariableResolver::*)()>(
    &::UnityEngine::UIElements::StyleVariableResolver::get_variableContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e6a1d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(),
                                                                               "get_variableContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.set_variableContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleVariableResolver::*)(::UnityEngine::UIElements::StyleVariableContext*)>(
    &::UnityEngine::UIElements::StyleVariableResolver::set_variableContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e6a1d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(), "set_variableContext", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleVariableContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleVariableResolver::*)(
    ::UnityEngine::UIElements::StyleProperty*, ::UnityEngine::UIElements::StyleSheet*, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*>)>(
    &::UnityEngine::UIElements::StyleVariableResolver::Init)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2e6a1e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(), "Init", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleProperty*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.PushContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleVariableResolver::*)(
    ::UnityEngine::UIElements::StyleSheet*, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*>)>(
    &::UnityEngine::UIElements::StyleVariableResolver::PushContext)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2e6a290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(), "PushContext", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.PopContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleVariableResolver::*)()>(
    &::UnityEngine::UIElements::StyleVariableResolver::PopContext)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e6a2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(),
                                                                               "PopContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.AddValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleVariableResolver::*)(::UnityEngine::UIElements::StyleValueHandle)>(
    &::UnityEngine::UIElements::StyleVariableResolver::AddValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2e6a378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(), "AddValue", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.ResolveVarFunction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StyleVariableResolver::*)(ByRef<int32_t>)>(
    &::UnityEngine::UIElements::StyleVariableResolver::ResolveVarFunction)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2e6a424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(), "ResolveVarFunction",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.ResolveVarFunction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__StyleVariableResolver__Result (::UnityEngine::UIElements::StyleVariableResolver::*)(
    ByRef<int32_t>, int32_t, ::StringW)>(&::UnityEngine::UIElements::StyleVariableResolver::ResolveVarFunction)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2e6a5a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(), "ResolveVarFunction", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.ValidateResolvedValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StyleVariableResolver::*)()>(
    &::UnityEngine::UIElements::StyleVariableResolver::ValidateResolvedValues)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2e6ac00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(),
                                                                               "ValidateResolvedValues", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.ResolveVariable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__StyleVariableResolver__Result (::UnityEngine::UIElements::StyleVariableResolver::*)(
    ::StringW)>(&::UnityEngine::UIElements::StyleVariableResolver::ResolveVariable)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x2e6a6fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(), "ResolveVariable",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.ResolveFallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__StyleVariableResolver__Result (::UnityEngine::UIElements::StyleVariableResolver::*)(
    ByRef<int32_t>)>(&::UnityEngine::UIElements::StyleVariableResolver::ResolveFallback)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x2e6a97c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(), "ResolveFallback",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver.ParseVarFunction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::UIElements::StyleSheet*, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*>, ByRef<int32_t>,
                         ByRef<int32_t>, ByRef<::StringW>)>(&::UnityEngine::UIElements::StyleVariableResolver::ParseVarFunction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2e6a4f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(), "ParseVarFunction", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleVariableResolver._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleVariableResolver::*)()>(
    &::UnityEngine::UIElements::StyleVariableResolver::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2e6aec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*& UnityEngine::UIElements::StyleVariableResolver::__get_m_Matcher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Matcher;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*> const& UnityEngine::UIElements::StyleVariableResolver::__get_m_Matcher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Matcher;
}
constexpr void UnityEngine::UIElements::StyleVariableResolver::__set_m_Matcher(::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Matcher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*& UnityEngine::UIElements::StyleVariableResolver::__get_m_ResolvedValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ResolvedValues;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*> const&
UnityEngine::UIElements::StyleVariableResolver::__get_m_ResolvedValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ResolvedValues;
}
constexpr void UnityEngine::UIElements::StyleVariableResolver::__set_m_ResolvedValues(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ResolvedValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Stack_1<::StringW>*& UnityEngine::UIElements::StyleVariableResolver::__get_m_ResolvedVarStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ResolvedVarStack;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::StringW>*> const& UnityEngine::UIElements::StyleVariableResolver::__get_m_ResolvedVarStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ResolvedVarStack;
}
constexpr void UnityEngine::UIElements::StyleVariableResolver::__set_m_ResolvedVarStack(::System::Collections::Generic::Stack_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ResolvedVarStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::StyleProperty*& UnityEngine::UIElements::StyleVariableResolver::__get_m_Property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Property;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleProperty*> const& UnityEngine::UIElements::StyleVariableResolver::__get_m_Property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Property;
}
constexpr void UnityEngine::UIElements::StyleVariableResolver::__set_m_Property(::UnityEngine::UIElements::StyleProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Property)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>*& UnityEngine::UIElements::StyleVariableResolver::__get_m_ContextStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ContextStack;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>*> const&
UnityEngine::UIElements::StyleVariableResolver::__get_m_ContextStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ContextStack;
}
constexpr void
UnityEngine::UIElements::StyleVariableResolver::__set_m_ContextStack(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ContextStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext& UnityEngine::UIElements::StyleVariableResolver::__get_m_CurrentContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CurrentContext;
}
constexpr ::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext const& UnityEngine::UIElements::StyleVariableResolver::__get_m_CurrentContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CurrentContext;
}
constexpr void UnityEngine::UIElements::StyleVariableResolver::__set_m_CurrentContext(::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_CurrentContext = value;
}
constexpr ::UnityEngine::UIElements::StyleVariableContext*& UnityEngine::UIElements::StyleVariableResolver::__get__variableContext_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____variableContext_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleVariableContext*> const& UnityEngine::UIElements::StyleVariableResolver::__get__variableContext_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____variableContext_k__BackingField;
}
constexpr void UnityEngine::UIElements::StyleVariableResolver::__set__variableContext_k__BackingField(::UnityEngine::UIElements::StyleVariableContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____variableContext_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::StyleVariableResolver::setStaticF_s_SyntaxParser(::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*, "s_SyntaxParser",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get>(
      std::forward<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*>(value));
}
inline ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser* UnityEngine::UIElements::StyleVariableResolver::getStaticF_s_SyntaxParser() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser*, "s_SyntaxParser",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get>();
}
inline ::UnityEngine::UIElements::StyleSheet* UnityEngine::UIElements::StyleVariableResolver::get_currentSheet() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(),
                                                                             "get_currentSheet", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheet*, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> UnityEngine::UIElements::StyleVariableResolver::get_currentHandles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(),
                                                                             "get_currentHandles", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*>, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* UnityEngine::UIElements::StyleVariableResolver::get_resolvedValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(),
                                                                             "get_resolvedValues", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleVariableContext* UnityEngine::UIElements::StyleVariableResolver::get_variableContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(),
                                                                             "get_variableContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleVariableContext*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleVariableResolver::set_variableContext(::UnityEngine::UIElements::StyleVariableContext* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(), "set_variableContext", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleVariableContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::StyleVariableResolver::Init(::UnityEngine::UIElements::StyleProperty* property, ::UnityEngine::UIElements::StyleSheet* sheet,
                                                                 ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> handles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(), "Init", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleProperty*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, property, sheet, handles);
}
inline void UnityEngine::UIElements::StyleVariableResolver::PushContext(::UnityEngine::UIElements::StyleSheet* sheet,
                                                                        ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> handles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(), "PushContext", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sheet, handles);
}
inline void UnityEngine::UIElements::StyleVariableResolver::PopContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(),
                                                                             "PopContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleVariableResolver::AddValue(::UnityEngine::UIElements::StyleValueHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(), "AddValue", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
inline bool UnityEngine::UIElements::StyleVariableResolver::ResolveVarFunction(ByRef<int32_t> index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(), "ResolveVarFunction",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index);
}
inline ::UnityEngine::UIElements::__StyleVariableResolver__Result UnityEngine::UIElements::StyleVariableResolver::ResolveVarFunction(ByRef<int32_t> index, int32_t argc, ::StringW varName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(), "ResolveVarFunction", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__StyleVariableResolver__Result, false>(this, ___internal_method, index, argc, varName);
}
inline bool UnityEngine::UIElements::StyleVariableResolver::ValidateResolvedValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(),
                                                                             "ValidateResolvedValues", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::__StyleVariableResolver__Result UnityEngine::UIElements::StyleVariableResolver::ResolveVariable(::StringW variableName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(), "ResolveVariable",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__StyleVariableResolver__Result, false>(this, ___internal_method, variableName);
}
inline ::UnityEngine::UIElements::__StyleVariableResolver__Result UnityEngine::UIElements::StyleVariableResolver::ResolveFallback(ByRef<int32_t> index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(), "ResolveFallback",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__StyleVariableResolver__Result, false>(this, ___internal_method, index);
}
inline void UnityEngine::UIElements::StyleVariableResolver::ParseVarFunction(::UnityEngine::UIElements::StyleSheet* sheet,
                                                                             ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> handles,
                                                                             ByRef<int32_t> index, ByRef<int32_t> argCount, ByRef<::StringW> variableName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(), "ParseVarFunction", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sheet, handles, index, argCount, variableName);
}
inline ::UnityEngine::UIElements::StyleVariableResolver* UnityEngine::UIElements::StyleVariableResolver::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::StyleVariableResolver*>());
}
inline void UnityEngine::UIElements::StyleVariableResolver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleVariableResolver*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleVariableResolver::StyleVariableResolver() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
