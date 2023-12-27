#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEventBase_def.hpp"
#include "UnityEngine/Events/zzzz__PersistentListenerMode_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
#include "UnityEngine/Events/zzzz__InvokableCallList_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/Events/zzzz__PersistentCallGroup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__PersistentCall_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::UnityEventBase::*)()>(&::UnityEngine::Events::UnityEventBase::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2cf9c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::UnityEventBase::*)()>(
    &::UnityEngine::Events::UnityEventBase::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cf9d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(),
                                                 "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::UnityEventBase::*)()>(
    &::UnityEngine::Events::UnityEventBase::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cf9d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(),
                                                 "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.FindMethod_Impl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (::UnityEngine::Events::UnityEventBase::*)(::StringW, ::System::Type*)>(
    &::UnityEngine::Events::UnityEventBase::FindMethod_Impl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.GetDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::BaseInvokableCall* (
    ::UnityEngine::Events::UnityEventBase::*)(::System::Object*, ::System::Reflection::MethodInfo*)>(&::UnityEngine::Events::UnityEventBase::GetDelegate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.FindMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (::UnityEngine::Events::UnityEventBase::*)(::UnityEngine::Events::PersistentCall*)>(
    &::UnityEngine::Events::UnityEventBase::FindMethod)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x2cf8cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(), "FindMethod", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::PersistentCall*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.FindMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (
    ::UnityEngine::Events::UnityEventBase::*)(::StringW, ::System::Type*, ::UnityEngine::Events::PersistentListenerMode, ::System::Type*)>(&::UnityEngine::Events::UnityEventBase::FindMethod)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2cf9d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(), "FindMethod", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::PersistentListenerMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.GetPersistentEventCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Events::UnityEventBase::*)()>(
    &::UnityEngine::Events::UnityEventBase::GetPersistentEventCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2cfa138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(),
                                                                               "GetPersistentEventCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.DirtyPersistentCalls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::UnityEventBase::*)()>(&::UnityEngine::Events::UnityEventBase::DirtyPersistentCalls)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2cf9d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(),
                                                                               "DirtyPersistentCalls", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.RebuildPersistentCallsIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::UnityEventBase::*)()>(
    &::UnityEngine::Events::UnityEventBase::RebuildPersistentCallsIfNeeded)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2cfa150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(),
                                                                               "RebuildPersistentCallsIfNeeded", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.AddCall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::UnityEventBase::*)(::UnityEngine::Events::BaseInvokableCall*)>(
    &::UnityEngine::Events::UnityEventBase::AddCall)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2cfa184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(), "AddCall", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::BaseInvokableCall*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.RemoveListener
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::UnityEventBase::*)(::System::Object*, ::System::Reflection::MethodInfo*)>(
    &::UnityEngine::Events::UnityEventBase::RemoveListener)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2cfa19c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(), "RemoveListener", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.RemoveAllListeners
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::UnityEventBase::*)()>(&::UnityEngine::Events::UnityEventBase::RemoveAllListeners)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2cfa1b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(),
                                                                               "RemoveAllListeners", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.PrepareInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* (
    ::UnityEngine::Events::UnityEventBase::*)()>(&::UnityEngine::Events::UnityEventBase::PrepareInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2cfa1cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(), "PrepareInvoke",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Events::UnityEventBase::*)()>(&::UnityEngine::Events::UnityEventBase::ToString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2cfa1ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::UnityEventBase.GetValidMethodInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Reflection::MethodInfo* (*)(::System::Type*, ::StringW, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::UnityEngine::Events::UnityEventBase::GetValidMethodInfo)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2cf9f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(), "GetValidMethodInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::Events::UnityEventBase::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::Events::InvokableCallList*& UnityEngine::Events::UnityEventBase::__get_m_Calls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Calls;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::InvokableCallList*> const& UnityEngine::Events::UnityEventBase::__get_m_Calls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Calls;
}
constexpr void UnityEngine::Events::UnityEventBase::__set_m_Calls(::UnityEngine::Events::InvokableCallList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Calls)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Events::PersistentCallGroup*& UnityEngine::Events::UnityEventBase::__get_m_PersistentCalls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_PersistentCalls;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::PersistentCallGroup*> const& UnityEngine::Events::UnityEventBase::__get_m_PersistentCalls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_PersistentCalls;
}
constexpr void UnityEngine::Events::UnityEventBase::__set_m_PersistentCalls(::UnityEngine::Events::PersistentCallGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PersistentCalls)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Events::UnityEventBase::__get_m_CallsDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CallsDirty;
}
constexpr bool const& UnityEngine::Events::UnityEventBase::__get_m_CallsDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CallsDirty;
}
constexpr void UnityEngine::Events::UnityEventBase::__set_m_CallsDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_CallsDirty = value;
}
inline ::UnityEngine::Events::UnityEventBase* UnityEngine::Events::UnityEventBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::UnityEventBase*>());
}
inline void UnityEngine::Events::UnityEventBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Events::UnityEventBase::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(),
                                               "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Events::UnityEventBase::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(),
                                               "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* UnityEngine::Events::UnityEventBase::FindMethod_Impl(::StringW name, ::System::Type* targetObjType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(), "FindMethod_Impl", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method, name, targetObjType);
}
inline ::UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::UnityEventBase::GetDelegate(::System::Object* target, ::System::Reflection::MethodInfo* theFunction) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(), "GetDelegate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::BaseInvokableCall*, false>(this, ___internal_method, target, theFunction);
}
inline ::System::Reflection::MethodInfo* UnityEngine::Events::UnityEventBase::FindMethod(::UnityEngine::Events::PersistentCall* call) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(), "FindMethod", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::PersistentCall*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method, call);
}
inline ::System::Reflection::MethodInfo* UnityEngine::Events::UnityEventBase::FindMethod(::StringW name, ::System::Type* listenerType, ::UnityEngine::Events::PersistentListenerMode mode,
                                                                                         ::System::Type* argumentType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(), "FindMethod", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::PersistentListenerMode>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method, name, listenerType, mode, argumentType);
}
inline int32_t UnityEngine::Events::UnityEventBase::GetPersistentEventCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(),
                                                                             "GetPersistentEventCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Events::UnityEventBase::DirtyPersistentCalls() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(),
                                                                             "DirtyPersistentCalls", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Events::UnityEventBase::RebuildPersistentCallsIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(),
                                                                             "RebuildPersistentCallsIfNeeded", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Events::UnityEventBase::AddCall(::UnityEngine::Events::BaseInvokableCall* call) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(), "AddCall", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::BaseInvokableCall*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, call);
}
inline void UnityEngine::Events::UnityEventBase::RemoveListener(::System::Object* targetObj, ::System::Reflection::MethodInfo* method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(), "RemoveListener", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetObj, method);
}
inline void UnityEngine::Events::UnityEventBase::RemoveAllListeners() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(),
                                                                             "RemoveAllListeners", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* UnityEngine::Events::UnityEventBase::PrepareInvoke() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(), "PrepareInvoke",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>*, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::Events::UnityEventBase::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* UnityEngine::Events::UnityEventBase::GetValidMethodInfo(::System::Type* objectType, ::StringW functionName,
                                                                                                 ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argumentTypes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEventBase*>::get(), "GetValidMethodInfo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(nullptr, ___internal_method, objectType, functionName, argumentTypes);
}
// Ctor Parameters []
constexpr ::UnityEngine::Events::UnityEventBase::UnityEventBase() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
