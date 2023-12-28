#pragma once
#include "UnityEngine/UIElements/zzzz__BindableElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TemplateContainer_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__TemplateContainer_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::__TemplateContainer__UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__TemplateContainer__UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(
    &::UnityEngine::UIElements::__TemplateContainer__UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x2db91d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TemplateContainer__UxmlTraits*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TemplateContainer__UxmlTraits*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__TemplateContainer__UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__TemplateContainer__UxmlTraits::*)()>(
    &::UnityEngine::UIElements::__TemplateContainer__UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2db96a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TemplateContainer__UxmlTraits*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::__TemplateContainer__UxmlTraits::__get_m_Template() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Template;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& UnityEngine::UIElements::__TemplateContainer__UxmlTraits::__get_m_Template() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Template;
}
constexpr void UnityEngine::UIElements::__TemplateContainer__UxmlTraits::__set_m_Template(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Template)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::__TemplateContainer__UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                           ::UnityEngine::UIElements::CreationContext cc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TemplateContainer__UxmlTraits*>::get(), "Init", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
inline ::UnityEngine::UIElements::__TemplateContainer__UxmlTraits* UnityEngine::UIElements::__TemplateContainer__UxmlTraits::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__TemplateContainer__UxmlTraits*>());
}
inline void UnityEngine::UIElements::__TemplateContainer__UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TemplateContainer__UxmlTraits*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__TemplateContainer__UxmlTraits::__TemplateContainer__UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::TemplateContainer.get_templateId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::TemplateContainer::*)()>(
    &::UnityEngine::UIElements::TemplateContainer::get_templateId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2db9014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateContainer*>::get(),
                                                                               "get_templateId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TemplateContainer.set_templateId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TemplateContainer::*)(::StringW)>(
    &::UnityEngine::UIElements::TemplateContainer::set_templateId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2db901c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateContainer*>::get(), "set_templateId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TemplateContainer.set_templateSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TemplateContainer::*)(::UnityEngine::UIElements::VisualTreeAsset*)>(
    &::UnityEngine::UIElements::TemplateContainer::set_templateSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2db9024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateContainer*>::get(), "set_templateSource", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TemplateContainer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TemplateContainer::*)()>(&::UnityEngine::UIElements::TemplateContainer::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2db902c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateContainer*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TemplateContainer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TemplateContainer::*)(::StringW)>(
    &::UnityEngine::UIElements::TemplateContainer::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2db9048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateContainer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TemplateContainer.get_contentContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::TemplateContainer::*)()>(
    &::UnityEngine::UIElements::TemplateContainer::get_contentContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2db90c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateContainer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateContainer*>::get(), 95));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TemplateContainer.SetContentContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TemplateContainer::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::TemplateContainer::SetContentContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2db90d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateContainer*>::get(), "SetContentContainer", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::TemplateContainer::__get__templateId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____templateId_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::TemplateContainer::__get__templateId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____templateId_k__BackingField;
}
constexpr void UnityEngine::UIElements::TemplateContainer::__set__templateId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____templateId_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::TemplateContainer::__get_m_ContentContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentContainer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::TemplateContainer::__get_m_ContentContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentContainer;
}
constexpr void UnityEngine::UIElements::TemplateContainer::__set_m_ContentContainer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ContentContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualTreeAsset*& UnityEngine::UIElements::TemplateContainer::__get_m_TemplateSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TemplateSource;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualTreeAsset*> const& UnityEngine::UIElements::TemplateContainer::__get_m_TemplateSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TemplateSource;
}
constexpr void UnityEngine::UIElements::TemplateContainer::__set_m_TemplateSource(::UnityEngine::UIElements::VisualTreeAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TemplateSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW UnityEngine::UIElements::TemplateContainer::get_templateId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateContainer*>::get(),
                                                                             "get_templateId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TemplateContainer::set_templateId(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateContainer*>::get(), "set_templateId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::TemplateContainer::set_templateSource(::UnityEngine::UIElements::VisualTreeAsset* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateContainer*>::get(), "set_templateSource", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualTreeAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::TemplateContainer* UnityEngine::UIElements::TemplateContainer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::TemplateContainer*>());
}
inline void UnityEngine::UIElements::TemplateContainer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateContainer*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TemplateContainer* UnityEngine::UIElements::TemplateContainer::New_ctor(::StringW templateId) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::TemplateContainer*>(templateId));
}
inline void UnityEngine::UIElements::TemplateContainer::_ctor(::StringW templateId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateContainer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, templateId);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::TemplateContainer::get_contentContainer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateContainer*>::get(),
                                                                             "get_contentContainer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TemplateContainer::SetContentContainer(::UnityEngine::UIElements::VisualElement* content) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateContainer*>::get(), "SetContentContainer", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, content);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TemplateContainer::TemplateContainer() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__TemplateContainer__UxmlFactory.get_uxmlName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::__TemplateContainer__UxmlFactory::*)()>(
    &::UnityEngine::UIElements::__TemplateContainer__UxmlFactory::get_uxmlName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2db90d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TemplateContainer__UxmlFactory*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TemplateContainer__UxmlFactory*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__TemplateContainer__UxmlFactory.get_uxmlQualifiedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::__TemplateContainer__UxmlFactory::*)()>(
    &::UnityEngine::UIElements::__TemplateContainer__UxmlFactory::get_uxmlQualifiedName)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2db9118;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TemplateContainer__UxmlFactory*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TemplateContainer__UxmlFactory*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__TemplateContainer__UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__TemplateContainer__UxmlFactory::*)()>(
    &::UnityEngine::UIElements::__TemplateContainer__UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2db918c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TemplateContainer__UxmlFactory*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::UIElements::__TemplateContainer__UxmlFactory::get_uxmlName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TemplateContainer__UxmlFactory*>::get(), "get_uxmlName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::__TemplateContainer__UxmlFactory::get_uxmlQualifiedName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TemplateContainer__UxmlFactory*>::get(), "get_uxmlQualifiedName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::__TemplateContainer__UxmlFactory* UnityEngine::UIElements::__TemplateContainer__UxmlFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__TemplateContainer__UxmlFactory*>());
}
inline void UnityEngine::UIElements::__TemplateContainer__UxmlFactory::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TemplateContainer__UxmlFactory*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__TemplateContainer__UxmlFactory::__TemplateContainer__UxmlFactory() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
