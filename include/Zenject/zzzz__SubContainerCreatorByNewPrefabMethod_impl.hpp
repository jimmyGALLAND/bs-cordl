#pragma once
#include "Zenject/zzzz__SubContainerCreatorByNewPrefabDynamicContext_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewPrefabMethod_def.hpp"
#include "Zenject/zzzz__IPrefabProvider_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__GameObjectContext_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewPrefabMethod._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerCreatorByNewPrefabMethod::*)(
    ::Zenject::DiContainer*, ::Zenject::IPrefabProvider*, ::Zenject::GameObjectCreationParameters*, ::System::Action_1<::Zenject::DiContainer*>*)>(
    &::Zenject::SubContainerCreatorByNewPrefabMethod::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2f0c930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabMethod*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IPrefabProvider*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByNewPrefabMethod.AddInstallers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerCreatorByNewPrefabMethod::*)(
    ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*, ::Zenject::GameObjectContext*)>(&::Zenject::SubContainerCreatorByNewPrefabMethod::AddInstallers)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2f0c970;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabMethod*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabMethod*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::Zenject::DiContainer*>*& Zenject::SubContainerCreatorByNewPrefabMethod::__get__installerMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____installerMethod;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& Zenject::SubContainerCreatorByNewPrefabMethod::__get__installerMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____installerMethod;
}
constexpr void Zenject::SubContainerCreatorByNewPrefabMethod::__set__installerMethod(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____installerMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::SubContainerCreatorByNewPrefabMethod* Zenject::SubContainerCreatorByNewPrefabMethod::New_ctor(::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider,
                                                                                                                ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
                                                                                                                ::System::Action_1<::Zenject::DiContainer*>* installerMethod) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::SubContainerCreatorByNewPrefabMethod*>(container, prefabProvider, gameObjectBindInfo, installerMethod));
}
inline void Zenject::SubContainerCreatorByNewPrefabMethod::_ctor(::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider,
                                                                 ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::System::Action_1<::Zenject::DiContainer*>* installerMethod) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabMethod*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IPrefabProvider*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, prefabProvider, gameObjectBindInfo, installerMethod);
}
inline void Zenject::SubContainerCreatorByNewPrefabMethod::AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::GameObjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByNewPrefabMethod*>::get(), "AddInstallers", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args, context);
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerCreatorByNewPrefabMethod::SubContainerCreatorByNewPrefabMethod() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
