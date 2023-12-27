#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SynchronizedActionQueue_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__SynchronizedActionQueue_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction::*)(float_t, ::System::Action*)>(
    &::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe59548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction::_ctor(float_t time, ::System::Action* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, action);
}
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "action", ty: "::System::Action*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction::__SynchronizedActionQueue__SynchronizedAction(float_t time, ::System::Action* action) noexcept {
  this->time = time;
  this->action = action;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction::__SynchronizedActionQueue__SynchronizedAction() {}
//  Writing Method size for method: ::GlobalNamespace::SynchronizedActionQueue.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SynchronizedActionQueue::*)()>(&::GlobalNamespace::SynchronizedActionQueue::Clear)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xe5941c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SynchronizedActionQueue*>::get(), "Clear",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchronizedActionQueue.EnqueueAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SynchronizedActionQueue::*)(float_t, ::System::Action*)>(
    &::GlobalNamespace::SynchronizedActionQueue::EnqueueAction)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xe5948c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SynchronizedActionQueue*>::get(), "EnqueueAction", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchronizedActionQueue.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SynchronizedActionQueue::*)(float_t)>(&::GlobalNamespace::SynchronizedActionQueue::Update)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xe59554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SynchronizedActionQueue*>::get(), "Update", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchronizedActionQueue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SynchronizedActionQueue::*)()>(&::GlobalNamespace::SynchronizedActionQueue::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xe59668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SynchronizedActionQueue*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction>*& GlobalNamespace::SynchronizedActionQueue::__get__synchronizedActionQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____synchronizedActionQueue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction>*> const&
GlobalNamespace::SynchronizedActionQueue::__get__synchronizedActionQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____synchronizedActionQueue;
}
constexpr void
GlobalNamespace::SynchronizedActionQueue::__set__synchronizedActionQueue(::System::Collections::Generic::List_1<::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____synchronizedActionQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SynchronizedActionQueue::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SynchronizedActionQueue*>::get(), "Clear",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SynchronizedActionQueue::EnqueueAction(float_t time, ::System::Action* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SynchronizedActionQueue*>::get(), "EnqueueAction", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, action);
}
inline void GlobalNamespace::SynchronizedActionQueue::Update(float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SynchronizedActionQueue*>::get(), "Update", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time);
}
inline ::GlobalNamespace::SynchronizedActionQueue* GlobalNamespace::SynchronizedActionQueue::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SynchronizedActionQueue*>());
}
inline void GlobalNamespace::SynchronizedActionQueue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SynchronizedActionQueue*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SynchronizedActionQueue::SynchronizedActionQueue() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
