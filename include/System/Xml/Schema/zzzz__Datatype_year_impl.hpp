#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_year.hpp"
#include "System/Xml/Schema/zzzz__Datatype_dateTimeBase_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_year_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_year.get_TypeCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlTypeCode (::System::Xml::Schema::Datatype_year::*)()>(&::System::Xml::Schema::Datatype_year::get_TypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x431a1a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_year*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_year*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_year._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Datatype_year::*)()>(&::System::Xml::Schema::Datatype_year::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x4313df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_year*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::System::Xml::Schema::XmlTypeCode System::Xml::Schema::Datatype_year::get_TypeCode()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_year*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlTypeCode, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::Datatype_year* System::Xml::Schema::Datatype_year::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::Datatype_year*>());
}
inline void System::Xml::Schema::Datatype_year::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_year*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Datatype_year::Datatype_year()   {
}
