#pragma once
// IWYU pragma private; include "GlobalNamespace/SynchronizedActionQueue.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SynchronizedActionQueue_def.hpp"
#include "GlobalNamespace/zzzz__SynchronizedActionQueue_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction::*)(float_t, ::System::Action*)>(&::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x229d154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction::_ctor(float_t  time, ::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, action);
}
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "action", ty: "::System::Action*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction::__SynchronizedActionQueue__SynchronizedAction(float_t  time, ::System::Action*  action) noexcept  {
this->time = time;
this->action = action;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction::__SynchronizedActionQueue__SynchronizedAction()   {
}
//  Writing Method size for method: ::GlobalNamespace::SynchronizedActionQueue.Clear
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SynchronizedActionQueue::*)()>(&::GlobalNamespace::SynchronizedActionQueue::Clear)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x229d02c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SynchronizedActionQueue*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchronizedActionQueue.EnqueueAction
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SynchronizedActionQueue::*)(float_t, ::System::Action*)>(&::GlobalNamespace::SynchronizedActionQueue::EnqueueAction)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x229d09c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SynchronizedActionQueue*>::get(),
                        "EnqueueAction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchronizedActionQueue.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SynchronizedActionQueue::*)(float_t)>(&::GlobalNamespace::SynchronizedActionQueue::Update)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x229d160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SynchronizedActionQueue*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchronizedActionQueue._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SynchronizedActionQueue::*)()>(&::GlobalNamespace::SynchronizedActionQueue::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x229d274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SynchronizedActionQueue*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction>*& GlobalNamespace::SynchronizedActionQueue::__cordl_internal_get__synchronizedActionQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____synchronizedActionQueue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction>*> const& GlobalNamespace::SynchronizedActionQueue::__cordl_internal_get__synchronizedActionQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____synchronizedActionQueue;
}
constexpr void GlobalNamespace::SynchronizedActionQueue::__cordl_internal_set__synchronizedActionQueue(::System::Collections::Generic::List_1<::GlobalNamespace::__SynchronizedActionQueue__SynchronizedAction>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____synchronizedActionQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SynchronizedActionQueue::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SynchronizedActionQueue*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SynchronizedActionQueue::EnqueueAction(float_t  time, ::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SynchronizedActionQueue*>::get(),
                        "EnqueueAction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, action);
}
inline void GlobalNamespace::SynchronizedActionQueue::Update(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SynchronizedActionQueue*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time);
}
inline ::GlobalNamespace::SynchronizedActionQueue* GlobalNamespace::SynchronizedActionQueue::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SynchronizedActionQueue*>());
}
inline void GlobalNamespace::SynchronizedActionQueue::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SynchronizedActionQueue*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SynchronizedActionQueue::SynchronizedActionQueue()   {
}
