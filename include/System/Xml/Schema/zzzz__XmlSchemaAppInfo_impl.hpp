#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaAppInfo.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAppInfo_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAppInfo.set_Source
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaAppInfo::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaAppInfo::set_Source)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4227fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAppInfo*>::get(),
                        "set_Source",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAppInfo.get_Markup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Xml::XmlNode*,::Array<::System::Xml::XmlNode*>*> (::System::Xml::Schema::XmlSchemaAppInfo::*)()>(&::System::Xml::Schema::XmlSchemaAppInfo::get_Markup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4227fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAppInfo*>::get(),
                        "get_Markup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAppInfo.set_Markup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaAppInfo::*)(::ArrayW<::System::Xml::XmlNode*,::Array<::System::Xml::XmlNode*>*>)>(&::System::Xml::Schema::XmlSchemaAppInfo::set_Markup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4227fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAppInfo*>::get(),
                        "set_Markup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlNode*,::Array<::System::Xml::XmlNode*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAppInfo._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaAppInfo::*)()>(&::System::Xml::Schema::XmlSchemaAppInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4227fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAppInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Schema::XmlSchemaAppInfo::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaAppInfo::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr void System::Xml::Schema::XmlSchemaAppInfo::__cordl_internal_set_source(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::XmlNode*,::Array<::System::Xml::XmlNode*>*>& System::Xml::Schema::XmlSchemaAppInfo::__cordl_internal_get_markup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___markup;
}
constexpr ::ArrayW<::System::Xml::XmlNode*,::Array<::System::Xml::XmlNode*>*> const& System::Xml::Schema::XmlSchemaAppInfo::__cordl_internal_get_markup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___markup;
}
constexpr void System::Xml::Schema::XmlSchemaAppInfo::__cordl_internal_set_markup(::ArrayW<::System::Xml::XmlNode*,::Array<::System::Xml::XmlNode*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___markup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Schema::XmlSchemaAppInfo::set_Source(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAppInfo*>::get(),
                        "set_Source",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::System::Xml::XmlNode*,::Array<::System::Xml::XmlNode*>*> System::Xml::Schema::XmlSchemaAppInfo::get_Markup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAppInfo*>::get(),
                        "get_Markup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Xml::XmlNode*,::Array<::System::Xml::XmlNode*>*>, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaAppInfo::set_Markup(::ArrayW<::System::Xml::XmlNode*,::Array<::System::Xml::XmlNode*>*>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAppInfo*>::get(),
                        "set_Markup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlNode*,::Array<::System::Xml::XmlNode*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaAppInfo* System::Xml::Schema::XmlSchemaAppInfo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlSchemaAppInfo*>());
}
inline void System::Xml::Schema::XmlSchemaAppInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAppInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaAppInfo::XmlSchemaAppInfo()   {
}
