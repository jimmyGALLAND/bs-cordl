#pragma once
// IWYU pragma private; include "System/Xml/Linq/NamespaceCache.hpp"
#include "System/Xml/Linq/zzzz__NamespaceCache_def.hpp"
#include "System/Xml/Linq/zzzz__XNamespace_def.hpp"
//  Writing Method size for method: ::System::Xml::Linq::NamespaceCache.Get
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XNamespace* (::System::Xml::Linq::NamespaceCache::*)(::StringW)>(&::System::Xml::Linq::NamespaceCache::Get)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x41b7ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::NamespaceCache>::get(),
                        "Get",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::System::Xml::Linq::XNamespace* System::Xml::Linq::NamespaceCache::Get(::StringW  namespaceName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Linq::NamespaceCache>::get(),
                        "Get",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XNamespace*, false>(this, ___internal_method, namespaceName);
}
// Ctor Parameters [CppParam { name: "_ns", ty: "::System::Xml::Linq::XNamespace*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_namespaceName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::System::Xml::Linq::NamespaceCache::NamespaceCache(::System::Xml::Linq::XNamespace*  _ns, ::StringW  _namespaceName) noexcept  {
this->_ns = _ns;
this->_namespaceName = _namespaceName;
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::NamespaceCache::NamespaceCache()   {
}
