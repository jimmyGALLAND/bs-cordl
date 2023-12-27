#pragma once
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByMethod_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorByMethod._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerCreatorByMethod::*)(
    ::Zenject::DiContainer*, ::Zenject::SubContainerCreatorBindInfo*, ::System::Action_1<::Zenject::DiContainer*>*)>(&::Zenject::SubContainerCreatorByMethod::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f0b7cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByMethod*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SubContainerCreatorBindInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByMethod.CreateSubContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Zenject::DiContainer* (::Zenject::SubContainerCreatorByMethod::*)(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::InjectContext*)>(
        &::Zenject::SubContainerCreatorByMethod::CreateSubContainer)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f0b808;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByMethod*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByMethod*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::Zenject::DiContainer*>*& Zenject::SubContainerCreatorByMethod::__get__installMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____installMethod;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& Zenject::SubContainerCreatorByMethod::__get__installMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____installMethod;
}
constexpr void Zenject::SubContainerCreatorByMethod::__set__installMethod(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____installMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::SubContainerCreatorByMethod* Zenject::SubContainerCreatorByMethod::New_ctor(::Zenject::DiContainer* container, ::Zenject::SubContainerCreatorBindInfo* containerBindInfo,
                                                                                              ::System::Action_1<::Zenject::DiContainer*>* installMethod) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::SubContainerCreatorByMethod*>(container, containerBindInfo, installMethod));
}
inline void Zenject::SubContainerCreatorByMethod::_ctor(::Zenject::DiContainer* container, ::Zenject::SubContainerCreatorBindInfo* containerBindInfo,
                                                        ::System::Action_1<::Zenject::DiContainer*>* installMethod) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByMethod*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SubContainerCreatorBindInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, containerBindInfo, installMethod);
}
inline ::Zenject::DiContainer* Zenject::SubContainerCreatorByMethod::CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByMethod*>::get(), "CreateSubContainer", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(this, ___internal_method, args, context);
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerCreatorByMethod::SubContainerCreatorByMethod() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
