#pragma once
// IWYU pragma private; include "System/Xml/Linq/NamespaceResolver.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Linq/zzzz__NamespaceResolver_def.hpp"
#include "System/Xml/Linq/zzzz__NamespaceResolver_def.hpp"
#include "System/Xml/Linq/zzzz__XNamespace_def.hpp"
//  Writing Method size for method: ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration::*)()>(&::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x41bad60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration::__cordl_internal_get_prefix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefix;
}
constexpr ::StringW const& System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration::__cordl_internal_get_prefix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefix;
}
constexpr void System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration::__cordl_internal_set_prefix(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Linq::XNamespace*& System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration::__cordl_internal_get_ns()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ns;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XNamespace*> const& System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration::__cordl_internal_get_ns() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ns;
}
constexpr void System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration::__cordl_internal_set_ns(::System::Xml::Linq::XNamespace*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration::__cordl_internal_get_scope()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scope;
}
constexpr int32_t const& System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration::__cordl_internal_get_scope() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scope;
}
constexpr void System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration::__cordl_internal_set_scope(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scope = value;
}
constexpr ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*& System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration::__cordl_internal_get_prev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*> const& System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration::__cordl_internal_get_prev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
constexpr void System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration::__cordl_internal_set_prev(::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prev)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration* System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*>());
}
inline void System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration::__NamespaceResolver__NamespaceDeclaration()   {
}
//  Writing Method size for method: ::System::Xml::Linq::NamespaceResolver.PushScope
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Linq::NamespaceResolver::*)()>(&::System::Xml::Linq::NamespaceResolver::PushScope)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x41bac54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::NamespaceResolver>::get(),
                        "PushScope",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::NamespaceResolver.PopScope
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Linq::NamespaceResolver::*)()>(&::System::Xml::Linq::NamespaceResolver::PopScope)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x41bad00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::NamespaceResolver>::get(),
                        "PopScope",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::NamespaceResolver.Add
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Linq::NamespaceResolver::*)(::StringW, ::System::Xml::Linq::XNamespace*)>(&::System::Xml::Linq::NamespaceResolver::Add)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x41bac64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::NamespaceResolver>::get(),
                        "Add",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Linq::XNamespace*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::NamespaceResolver.AddFirst
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Linq::NamespaceResolver::*)(::StringW, ::System::Xml::Linq::XNamespace*)>(&::System::Xml::Linq::NamespaceResolver::AddFirst)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x41baae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::NamespaceResolver>::get(),
                        "AddFirst",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Linq::XNamespace*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Linq::NamespaceResolver.GetPrefixOfNamespace
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Linq::NamespaceResolver::*)(::System::Xml::Linq::XNamespace*, bool)>(&::System::Xml::Linq::NamespaceResolver::GetPrefixOfNamespace)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x41baa0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::NamespaceResolver>::get(),
                        "GetPrefixOfNamespace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Linq::XNamespace*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::Xml::Linq::NamespaceResolver::PushScope()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::NamespaceResolver>::get(),
                        "PushScope",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Linq::NamespaceResolver::PopScope()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::NamespaceResolver>::get(),
                        "PopScope",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Linq::NamespaceResolver::Add(::StringW  prefix, ::System::Xml::Linq::XNamespace*  ns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::NamespaceResolver>::get(),
                        "Add",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Linq::XNamespace*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, ns);
}
inline void System::Xml::Linq::NamespaceResolver::AddFirst(::StringW  prefix, ::System::Xml::Linq::XNamespace*  ns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::NamespaceResolver>::get(),
                        "AddFirst",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Linq::XNamespace*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, ns);
}
inline ::StringW System::Xml::Linq::NamespaceResolver::GetPrefixOfNamespace(::System::Xml::Linq::XNamespace*  ns, bool  allowDefaultNamespace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::NamespaceResolver>::get(),
                        "GetPrefixOfNamespace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Linq::XNamespace*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, ns, allowDefaultNamespace);
}
// Ctor Parameters [CppParam { name: "_scope", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_declaration", ty: "::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_rover", ty: "::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::System::Xml::Linq::NamespaceResolver::NamespaceResolver(int32_t  _scope, ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*  _declaration, ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*  _rover) noexcept  {
this->_scope = _scope;
this->_declaration = _declaration;
this->_rover = _rover;
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::NamespaceResolver::NamespaceResolver()   {
}
