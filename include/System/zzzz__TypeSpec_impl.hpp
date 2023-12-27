#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TypeSpec_def.hpp"
#include "System/zzzz__TypeSpec_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__ModifierSpec_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__TypeIdentifier_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::__TypeSpec__DisplayNameFormat::__TypeSpec__DisplayNameFormat(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::__TypeSpec__DisplayNameFormat::__TypeSpec__DisplayNameFormat() {}
constexpr ::System::__TypeSpec__DisplayNameFormat System::__TypeSpec__DisplayNameFormat::Default{ static_cast<int32_t>(0x0) };
constexpr ::System::__TypeSpec__DisplayNameFormat System::__TypeSpec__DisplayNameFormat::WANT_ASSEMBLY{ static_cast<int32_t>(0x1) };
constexpr ::System::__TypeSpec__DisplayNameFormat System::__TypeSpec__DisplayNameFormat::NO_MODIFIERS{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::TypeSpec.get_HasModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::TypeSpec::*)()>(&::System::TypeSpec::get_HasModifiers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2606b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "get_HasModifiers",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec.GetDisplayFullName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::TypeSpec::*)(::System::__TypeSpec__DisplayNameFormat)>(
    &::System::TypeSpec::GetDisplayFullName)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x2606bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "GetDisplayFullName", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TypeSpec__DisplayNameFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec.GetModifierString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::StringBuilder* (::System::TypeSpec::*)(::System::Text::StringBuilder*)>(
    &::System::TypeSpec::GetModifierString)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2607028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "GetModifierString", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec.get_DisplayFullName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::TypeSpec::*)()>(&::System::TypeSpec::get_DisplayFullName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2607000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "get_DisplayFullName",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TypeSpec* (*)(::StringW)>(&::System::TypeSpec::Parse)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x260721c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "Parse", std::vector<Il2CppClass*>{},
                                                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec.UnescapeInternalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::TypeSpec::UnescapeInternalName)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2607e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "UnescapeInternalName", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec.Resolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Type* (::System::TypeSpec::*)(::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*,
                                                        ::System::Func_4<::System::Reflection::Assembly*, ::StringW, bool, ::System::Type*>*, bool, bool, ByRef<::System::Threading::StackCrawlMark>)>(
        &::System::TypeSpec::Resolve)> {
  constexpr static std::size_t size = 0x90c;
  constexpr static std::size_t addrs = 0x2607f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "Resolve", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<::System::Reflection::Assembly*, ::StringW, bool, ::System::Type*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec.AddName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::TypeSpec::*)(::StringW)>(&::System::TypeSpec::AddName)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x260886c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "AddName", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec.AddModifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::TypeSpec::*)(::System::ModifierSpec*)>(&::System::TypeSpec::AddModifier)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x260898c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "AddModifier", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ModifierSpec*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec.SkipSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<int32_t>)>(&::System::TypeSpec::SkipSpace)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2608a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "SkipSpace", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec.BoundCheck
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::StringW)>(&::System::TypeSpec::BoundCheck)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2608b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "BoundCheck", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec.ParsedTypeIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TypeIdentifier* (*)(::StringW)>(&::System::TypeSpec::ParsedTypeIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2608984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "ParsedTypeIdentifier", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TypeSpec* (*)(::StringW, ByRef<int32_t>, bool, bool)>(&::System::TypeSpec::Parse)> {
  constexpr static std::size_t size = 0xb84;
  constexpr static std::size_t addrs = 0x26072f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "Parse", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeSpec._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::TypeSpec::*)()>(&::System::TypeSpec::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2608bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::TypeIdentifier*& System::TypeSpec::__get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___name;
}
constexpr ::cordl_internals::to_const_pointer<::System::TypeIdentifier*> const& System::TypeSpec::__get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___name;
}
constexpr void System::TypeSpec::__set_name(::System::TypeIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::TypeSpec::__get_assembly_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___assembly_name;
}
constexpr ::StringW const& System::TypeSpec::__get_assembly_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___assembly_name;
}
constexpr void System::TypeSpec::__set_assembly_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assembly_name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::TypeIdentifier*>*& System::TypeSpec::__get_nested() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nested;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::TypeIdentifier*>*> const& System::TypeSpec::__get_nested() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nested;
}
constexpr void System::TypeSpec::__set_nested(::System::Collections::Generic::List_1<::System::TypeIdentifier*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nested)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::TypeSpec*>*& System::TypeSpec::__get_generic_params() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___generic_params;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::TypeSpec*>*> const& System::TypeSpec::__get_generic_params() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___generic_params;
}
constexpr void System::TypeSpec::__set_generic_params(::System::Collections::Generic::List_1<::System::TypeSpec*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___generic_params)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::ModifierSpec*>*& System::TypeSpec::__get_modifier_spec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___modifier_spec;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ModifierSpec*>*> const& System::TypeSpec::__get_modifier_spec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___modifier_spec;
}
constexpr void System::TypeSpec::__set_modifier_spec(::System::Collections::Generic::List_1<::System::ModifierSpec*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___modifier_spec)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::TypeSpec::__get_is_byref() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___is_byref;
}
constexpr bool const& System::TypeSpec::__get_is_byref() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___is_byref;
}
constexpr void System::TypeSpec::__set_is_byref(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___is_byref = value;
}
constexpr ::StringW& System::TypeSpec::__get_display_fullname() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___display_fullname;
}
constexpr ::StringW const& System::TypeSpec::__get_display_fullname() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___display_fullname;
}
constexpr void System::TypeSpec::__set_display_fullname(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___display_fullname)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool System::TypeSpec::get_HasModifiers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "get_HasModifiers",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::TypeSpec::GetDisplayFullName(::System::__TypeSpec__DisplayNameFormat flags) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "GetDisplayFullName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TypeSpec__DisplayNameFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, flags);
}
inline ::System::Text::StringBuilder* System::TypeSpec::GetModifierString(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "GetModifierString", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*, false>(this, ___internal_method, sb);
}
inline ::StringW System::TypeSpec::get_DisplayFullName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "get_DisplayFullName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::TypeSpec* System::TypeSpec::Parse(::StringW typeName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "Parse", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TypeSpec*, false>(nullptr, ___internal_method, typeName);
}
inline ::StringW System::TypeSpec::UnescapeInternalName(::StringW displayName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "UnescapeInternalName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, displayName);
}
inline ::System::Type* System::TypeSpec::Resolve(::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* assemblyResolver,
                                                 ::System::Func_4<::System::Reflection::Assembly*, ::StringW, bool, ::System::Type*>* typeResolver, bool throwOnError, bool ignoreCase,
                                                 ByRef<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "Resolve", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<::System::Reflection::Assembly*, ::StringW, bool, ::System::Type*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, assemblyResolver, typeResolver, throwOnError, ignoreCase, stackMark);
}
inline void System::TypeSpec::AddName(::StringW type_name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "AddName", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type_name);
}
inline void System::TypeSpec::AddModifier(::System::ModifierSpec* md) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "AddModifier", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ModifierSpec*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, md);
}
inline void System::TypeSpec::SkipSpace(::StringW name, ByRef<int32_t> pos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "SkipSpace", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, pos);
}
inline void System::TypeSpec::BoundCheck(int32_t idx, ::StringW s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "BoundCheck", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, idx, s);
}
inline ::System::TypeIdentifier* System::TypeSpec::ParsedTypeIdentifier(::StringW displayName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "ParsedTypeIdentifier", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TypeIdentifier*, false>(nullptr, ___internal_method, displayName);
}
inline ::System::TypeSpec* System::TypeSpec::Parse(::StringW name, ByRef<int32_t> p, bool is_recurse, bool allow_aqn) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), "Parse", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TypeSpec*, false>(nullptr, ___internal_method, name, p, is_recurse, allow_aqn);
}
inline ::System::TypeSpec* System::TypeSpec::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::TypeSpec*>());
}
inline void System::TypeSpec::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeSpec*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::TypeSpec::TypeSpec() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
