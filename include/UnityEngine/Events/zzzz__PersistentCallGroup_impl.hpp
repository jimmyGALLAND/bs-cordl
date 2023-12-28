#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__PersistentCallGroup_def.hpp"
#include "UnityEngine/Events/zzzz__PersistentCall_def.hpp"
#include "UnityEngine/Events/zzzz__InvokableCallList_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEventBase_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Events::PersistentCallGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::PersistentCallGroup::*)()>(&::UnityEngine::Events::PersistentCallGroup::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2cf935c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::PersistentCallGroup*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::PersistentCallGroup.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Events::PersistentCallGroup::*)()>(&::UnityEngine::Events::PersistentCallGroup::get_Count)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cf93dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::PersistentCallGroup*>::get(), "get_Count",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::PersistentCallGroup.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::PersistentCallGroup::*)(
    ::UnityEngine::Events::InvokableCallList*, ::UnityEngine::Events::UnityEventBase*)>(&::UnityEngine::Events::PersistentCallGroup::Initialize)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2cf9424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::PersistentCallGroup*>::get(), "Initialize", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::InvokableCallList*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityEventBase*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::PersistentCall*>*& UnityEngine::Events::PersistentCallGroup::__get_m_Calls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Calls;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Events::PersistentCall*>*> const& UnityEngine::Events::PersistentCallGroup::__get_m_Calls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Calls;
}
constexpr void UnityEngine::Events::PersistentCallGroup::__set_m_Calls(::System::Collections::Generic::List_1<::UnityEngine::Events::PersistentCall*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Calls)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Events::PersistentCallGroup* UnityEngine::Events::PersistentCallGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::PersistentCallGroup*>());
}
inline void UnityEngine::Events::PersistentCallGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::PersistentCallGroup*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Events::PersistentCallGroup::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::PersistentCallGroup*>::get(), "get_Count",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Events::PersistentCallGroup::Initialize(::UnityEngine::Events::InvokableCallList* invokableList, ::UnityEngine::Events::UnityEventBase* unityEventBase) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::PersistentCallGroup*>::get(), "Initialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::InvokableCallList*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityEventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, invokableList, unityEventBase);
}
// Ctor Parameters []
constexpr ::UnityEngine::Events::PersistentCallGroup::PersistentCallGroup() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
