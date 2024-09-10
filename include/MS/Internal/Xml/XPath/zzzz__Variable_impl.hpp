#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/Variable.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_impl.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Variable_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
#include "System/Xml/XPath/zzzz__XPathResultType_def.hpp"
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Variable._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MS::Internal::Xml::XPath::Variable::*)(::StringW, ::StringW)>(&::MS::Internal::Xml::XPath::Variable::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4274d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Variable*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Variable.get_Type
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::__AstNode__AstType (::MS::Internal::Xml::XPath::Variable::*)()>(&::MS::Internal::Xml::XPath::Variable::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4274d50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Variable*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Variable*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Variable.get_ReturnType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XPath::XPathResultType (::MS::Internal::Xml::XPath::Variable::*)()>(&::MS::Internal::Xml::XPath::Variable::get_ReturnType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4274d58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Variable*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Variable*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr ::StringW& MS::Internal::Xml::XPath::Variable::__cordl_internal_get__localname()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localname;
}
constexpr ::StringW const& MS::Internal::Xml::XPath::Variable::__cordl_internal_get__localname() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localname;
}
constexpr void MS::Internal::Xml::XPath::Variable::__cordl_internal_set__localname(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localname)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& MS::Internal::Xml::XPath::Variable::__cordl_internal_get__prefix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefix;
}
constexpr ::StringW const& MS::Internal::Xml::XPath::Variable::__cordl_internal_get__prefix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefix;
}
constexpr void MS::Internal::Xml::XPath::Variable::__cordl_internal_set__prefix(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::MS::Internal::Xml::XPath::Variable* MS::Internal::Xml::XPath::Variable::New_ctor(::StringW  name, ::StringW  prefix)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::MS::Internal::Xml::XPath::Variable*>(name, prefix));
}
inline void MS::Internal::Xml::XPath::Variable::_ctor(::StringW  name, ::StringW  prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Variable*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, prefix);
}
inline ::MS::Internal::Xml::XPath::__AstNode__AstType MS::Internal::Xml::XPath::Variable::get_Type()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Variable*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::__AstNode__AstType, false>(this, ___internal_method);
}
inline ::System::Xml::XPath::XPathResultType MS::Internal::Xml::XPath::Variable::get_ReturnType()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Variable*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathResultType, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::XPath::Variable::Variable()   {
}
