#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlTypeMapMemberAnyAttribute.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMember_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberAnyAttribute_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute::*)()>(&::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x42fe454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute* System::Xml::Serialization::XmlTypeMapMemberAnyAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute*>());
}
inline void System::Xml::Serialization::XmlTypeMapMemberAnyAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute::XmlTypeMapMemberAnyAttribute()   {
}
