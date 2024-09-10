#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__InstantiationParameters_impl.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_impl.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "GlobalNamespace/zzzz__DelegateList_1_def.hpp"
#include "GlobalNamespace/zzzz__ListWithEvents_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Networking/zzzz__CertificateHandler_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__GroupOperation_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__IAsyncOperation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IInstanceProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IResourceProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ISceneProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__InstantiationParameters_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IAllocationStrategy_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IOperationCacheKey_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__IUpdateReceiver_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneParameters_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType::__ResourceManager__DiagnosticEventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType::__ResourceManager__DiagnosticEventType()   {
}
constexpr ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType  UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType::AsyncOperationFail{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType  UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType::AsyncOperationCreate{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType  UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType::AsyncOperationPercentComplete{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType  UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType::AsyncOperationComplete{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType  UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType::AsyncOperationReferenceCount{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType  UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType::AsyncOperationDestroy{static_cast<int32_t>(0x5)};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext.get_OperationHandle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::get_OperationHandle)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x46fecc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                        "get_OperationHandle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext.get_Type
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType (::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x46fecd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                        "get_Type",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext.get_EventValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::get_EventValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x46fece0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                        "get_EventValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext.get_Location
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* (::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::get_Location)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x46fece8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                        "get_Location",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext.get_Context
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::get_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x46fecf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                        "get_Context",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext.get_Error
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x46fecf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                        "get_Error",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType, int32_t, ::StringW, ::System::Object*)>(&::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x46fed00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::get_OperationHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                        "get_OperationHandle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                        "get_Type",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType, false>(this, ___internal_method);
}
inline int32_t UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::get_EventValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                        "get_EventValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::get_Location()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                        "get_Location",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::get_Context()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                        "get_Context",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::get_Error()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                        "get_Error",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
/// @param eventValue: int32_t (default: static_cast<int32_t>(0x0))
/// @param error: ::StringW (default: nullptr)
/// @param context: ::System::Object* (default: nullptr)
inline void UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::_ctor(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  op, ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType  type, int32_t  eventValue, ::StringW  error, ::System::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op, type, eventValue, error, context);
}
// Ctor Parameters [CppParam { name: "_OperationHandle_k__BackingField", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Type_k__BackingField", ty: "::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "_EventValue_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Location_k__BackingField", ty: "::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_Context_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_Error_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::__ResourceManager__DiagnosticEventContext(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  _OperationHandle_k__BackingField, ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType  _Type_k__BackingField, int32_t  _EventValue_k__BackingField, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  _Location_k__BackingField, ::System::Object*  _Context_k__BackingField, ::StringW  _Error_k__BackingField) noexcept  {
this->_OperationHandle_k__BackingField = _OperationHandle_k__BackingField;
this->_Type_k__BackingField = _Type_k__BackingField;
this->_EventValue_k__BackingField = _EventValue_k__BackingField;
this->_Location_k__BackingField = _Location_k__BackingField;
this->_Context_k__BackingField = _Context_k__BackingField;
this->_Error_k__BackingField = _Error_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext::__ResourceManager__DiagnosticEventContext()   {
}
// Ctor Parameters [CppParam { name: "operation", ty: "::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "incrementRefCount", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest::__ResourceManager__DeferredCallbackRegisterRequest(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  operation, bool  incrementRefCount) noexcept  {
this->operation = operation;
this->incrementRefCount = incrementRefCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest::__ResourceManager__DeferredCallbackRegisterRequest()   {
}
template<typename TObject>
constexpr bool& UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::__cordl_internal_get_m_Success()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Success;
}
template<typename TObject>
constexpr bool const& UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::__cordl_internal_get_m_Success() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Success;
}
template<typename TObject>
constexpr void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::__cordl_internal_set_m_Success(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Success = value;
}
template<typename TObject>
constexpr ::System::Exception*& UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::__cordl_internal_get_m_Exception()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Exception;
}
template<typename TObject>
constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::__cordl_internal_get_m_Exception() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Exception;
}
template<typename TObject>
constexpr void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::__cordl_internal_set_m_Exception(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Exception)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template<typename TObject>
constexpr bool& UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::__cordl_internal_get_m_ReleaseDependenciesOnFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReleaseDependenciesOnFailure;
}
template<typename TObject>
constexpr bool const& UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::__cordl_internal_get_m_ReleaseDependenciesOnFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReleaseDependenciesOnFailure;
}
template<typename TObject>
constexpr void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::__cordl_internal_set_m_ReleaseDependenciesOnFailure(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ReleaseDependenciesOnFailure = value;
}
template<typename TObject>
inline ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>* UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>*>());
}
template<typename TObject>
inline void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param releaseDependenciesOnFailure: bool (default: true)
template<typename TObject>
inline void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::Init(TObject  result, bool  success, ::StringW  errorMsg, bool  releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, success, errorMsg, releaseDependenciesOnFailure);
}
/// @param releaseDependenciesOnFailure: bool (default: true)
template<typename TObject>
inline void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::Init(TObject  result, bool  success, ::System::Exception*  exception, bool  releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, success, exception, releaseDependenciesOnFailure);
}
template<typename TObject>
inline ::StringW UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::get_DebugName()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>*>::get(),
                    31
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template<typename TObject>
inline bool UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::InvokeWaitForCompletion()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>*>::get(),
                    33
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template<typename TObject>
inline void UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::Execute()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>*>::get(),
                    28
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template<typename TObject>
constexpr ::UnityEngine::ResourceManagement::__ResourceManager__CompletedOperation_1<TObject>::__ResourceManager__CompletedOperation_1()   {
}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation.Init
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::*)(::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>)>(&::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::Init)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x46fdf10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation.GetDownloadStatus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::*)(::System::Collections::Generic::HashSet_1<::System::Object*>*)>(&::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::GetDownloadStatus)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x46fee04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation.GetDependencies
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::*)(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(&::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::GetDependencies)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x46feee0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation.get_DebugName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::get_DebugName)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x46ff000;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation.InstanceScene
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SceneManagement::Scene (::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::InstanceScene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x46ff110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                        "InstanceScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation.Destroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::Destroy)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x46ff118;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation.get_Progress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::get_Progress)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x46ff1cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation.InvokeWaitForCompletion
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x46ff214;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation.Execute
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::Execute)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x46ff344;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::*)()>(&::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x46ff578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>& UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__cordl_internal_get_m_dependency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_dependency;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> const& UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__cordl_internal_get_m_dependency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_dependency;
}
constexpr void UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__cordl_internal_set_m_dependency(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_dependency = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters& UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__cordl_internal_get_m_instantiationParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_instantiationParams;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters const& UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__cordl_internal_get_m_instantiationParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_instantiationParams;
}
constexpr void UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__cordl_internal_set_m_instantiationParams(::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_instantiationParams = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*& UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__cordl_internal_get_m_instanceProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_instanceProvider;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*> const& UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__cordl_internal_get_m_instanceProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_instanceProvider;
}
constexpr void UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__cordl_internal_set_m_instanceProvider(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_instanceProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__cordl_internal_get_m_instance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_instance;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__cordl_internal_get_m_instance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_instance;
}
constexpr void UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__cordl_internal_set_m_instance(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_instance)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::SceneManagement::Scene& UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__cordl_internal_get_m_scene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_scene;
}
constexpr ::UnityEngine::SceneManagement::Scene const& UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__cordl_internal_get_m_scene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_scene;
}
constexpr void UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__cordl_internal_set_m_scene(::UnityEngine::SceneManagement::Scene  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_scene = value;
}
inline void UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::Init(::UnityEngine::ResourceManagement::ResourceManager*  rm, ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*  instanceProvider, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters  instantiationParams, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  dependency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rm, instanceProvider, instantiationParams, dependency);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                    35
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(this, ___internal_method, visited);
}
inline void UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  deps)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                    32
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deps);
}
inline ::StringW UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::get_DebugName()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                    31
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::SceneManagement::Scene UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::InstanceScene()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                        "InstanceScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::Scene, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::Destroy()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                    29
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::get_Progress()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                    30
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::InvokeWaitForCompletion()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                    33
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::Execute()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                    28
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation* UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>());
}
inline void UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation::__ResourceManager__InstanceOperation()   {
}
template<typename TObject>
constexpr ::System::Action_1<TObject>*& UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass95_0_1<TObject>::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
template<typename TObject>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TObject>*> const& UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass95_0_1<TObject>::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
template<typename TObject>
constexpr void UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass95_0_1<TObject>::__cordl_internal_set_callback(::System::Action_1<TObject>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template<typename TObject>
constexpr bool& UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass95_0_1<TObject>::__cordl_internal_get_releaseDependenciesOnFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseDependenciesOnFailure;
}
template<typename TObject>
constexpr bool const& UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass95_0_1<TObject>::__cordl_internal_get_releaseDependenciesOnFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseDependenciesOnFailure;
}
template<typename TObject>
constexpr void UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass95_0_1<TObject>::__cordl_internal_set_releaseDependenciesOnFailure(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___releaseDependenciesOnFailure = value;
}
template<typename TObject>
constexpr ::UnityEngine::ResourceManagement::ResourceManager*& UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass95_0_1<TObject>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename TObject>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceManager*> const& UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass95_0_1<TObject>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename TObject>
constexpr void UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass95_0_1<TObject>::__cordl_internal_set___4__this(::UnityEngine::ResourceManagement::ResourceManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template<typename TObject>
inline ::UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass95_0_1<TObject>* UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass95_0_1<TObject>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass95_0_1<TObject>*>());
}
template<typename TObject>
inline void UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass95_0_1<TObject>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass95_0_1<TObject>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TObject>
inline void UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass95_0_1<TObject>::_ProvideResources_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass95_0_1<TObject>*>::get(),
                        "<ProvideResources>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x);
}
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass95_0_1<TObject>::_ProvideResources_b__1(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  resultHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass95_0_1<TObject>*>::get(),
                        "<ProvideResources>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>, false>(this, ___internal_method, resultHandle);
}
// Ctor Parameters []
template<typename TObject>
constexpr ::UnityEngine::ResourceManagement::__ResourceManager____c__DisplayClass95_0_1<TObject>::__ResourceManager____c__DisplayClass95_0_1()   {
}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_ExceptionHandler
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>* (*)()>(&::UnityEngine::ResourceManagement::ResourceManager::get_ExceptionHandler)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x46f9e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "get_ExceptionHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.set_ExceptionHandler
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>*)>(&::UnityEngine::ResourceManagement::ResourceManager::set_ExceptionHandler)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x46f9ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "set_ExceptionHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_InternalIdTransformFunc
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>* (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::get_InternalIdTransformFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x46f9f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "get_InternalIdTransformFunc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.set_InternalIdTransformFunc
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*)>(&::UnityEngine::ResourceManagement::ResourceManager::set_InternalIdTransformFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x46f9f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "set_InternalIdTransformFunc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.TransformInternalId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::ResourceManagement::ResourceManager::TransformInternalId)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x46f9f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "TransformInternalId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_WebRequestOverride
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::get_WebRequestOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x46fa010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "get_WebRequestOverride",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.set_WebRequestOverride
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*)>(&::UnityEngine::ResourceManagement::ResourceManager::set_WebRequestOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x46fa018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "set_WebRequestOverride",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_OperationCacheCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::get_OperationCacheCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x46fa020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "get_OperationCacheCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_InstanceOperationCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::get_InstanceOperationCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x46fa070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "get_InstanceOperationCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.AddUpdateReceiver
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::IUpdateReceiver*)>(&::UnityEngine::ResourceManagement::ResourceManager::AddUpdateReceiver)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x46fa0b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "AddUpdateReceiver",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::IUpdateReceiver*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.RemoveUpdateReciever
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::IUpdateReceiver*)>(&::UnityEngine::ResourceManagement::ResourceManager::RemoveUpdateReciever)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x46fa120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "RemoveUpdateReciever",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::IUpdateReceiver*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_Allocator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::Util::IAllocationStrategy* (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::get_Allocator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x46fa248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "get_Allocator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.set_Allocator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::Util::IAllocationStrategy*)>(&::UnityEngine::ResourceManagement::ResourceManager::set_Allocator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x46fa250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "set_Allocator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_ResourceProviders
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::get_ResourceProviders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x46fa258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "get_ResourceProviders",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.get_CertificateHandlerInstance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::CertificateHandler* (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::get_CertificateHandlerInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x46fa260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "get_CertificateHandlerInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.set_CertificateHandlerInstance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::Networking::CertificateHandler*)>(&::UnityEngine::ResourceManagement::ResourceManager::set_CertificateHandlerInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x46fa268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "set_CertificateHandlerInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::CertificateHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::Util::IAllocationStrategy*)>(&::UnityEngine::ResourceManagement::ResourceManager::_ctor)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x46fa270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.OnObjectAdded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Object*)>(&::UnityEngine::ResourceManagement::ResourceManager::OnObjectAdded)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x46fa8f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "OnObjectAdded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.OnObjectRemoved
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Object*)>(&::UnityEngine::ResourceManagement::ResourceManager::OnObjectRemoved)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x46fa968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "OnObjectRemoved",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.RegisterForCallbacks
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::RegisterForCallbacks)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x46fa9dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "RegisterForCallbacks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ClearDiagnosticsCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::ClearDiagnosticsCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x46faaa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "ClearDiagnosticsCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ClearDiagnosticCallbacks
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::ClearDiagnosticCallbacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x46faaac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "ClearDiagnosticCallbacks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.UnregisterDiagnosticCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*)>(&::UnityEngine::ResourceManagement::ResourceManager::UnregisterDiagnosticCallback)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x46faab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "UnregisterDiagnosticCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.RegisterDiagnosticCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType,int32_t,::System::Object*>*)>(&::UnityEngine::ResourceManagement::ResourceManager::RegisterDiagnosticCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x46fabb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "RegisterDiagnosticCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType,int32_t,::System::Object*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.RegisterDiagnosticCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*)>(&::UnityEngine::ResourceManagement::ResourceManager::RegisterDiagnosticCallback)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x46fabb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "RegisterDiagnosticCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.PostDiagnosticEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext)>(&::UnityEngine::ResourceManagement::ResourceManager::PostDiagnosticEvent)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x46fac60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "PostDiagnosticEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.GetResourceProvider
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* (::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Type*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::ResourceManagement::ResourceManager::GetResourceProvider)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x46fad5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "GetResourceProvider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.GetDefaultTypeForLocation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::ResourceManagement::ResourceManager::GetDefaultTypeForLocation)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x46fb1a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "GetDefaultTypeForLocation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.CalculateLocationsHash
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*, ::System::Type*)>(&::UnityEngine::ResourceManagement::ResourceManager::CalculateLocationsHash)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x46fb2dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "CalculateLocationsHash",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ProvideResource
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Type*, bool)>(&::UnityEngine::ResourceManagement::ResourceManager::ProvideResource)> {
  constexpr static std::size_t size = 0x794;
  constexpr static std::size_t addrs = 0x46fb730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "ProvideResource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.GetOperationFromCache
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Type*)>(&::UnityEngine::ResourceManagement::ResourceManager::GetOperationFromCache)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x46fca4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "GetOperationFromCache",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.CreateCacheKeyForLocation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::Util::IOperationCacheKey* (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Type*)>(&::UnityEngine::ResourceManagement::ResourceManager::CreateCacheKeyForLocation)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x46fbee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "CreateCacheKeyForLocation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.StartOperation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::ResourceManagement::ResourceManager::StartOperation)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x46fc8d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "StartOperation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.OnInstanceOperationDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*)>(&::UnityEngine::ResourceManagement::ResourceManager::OnInstanceOperationDestroy)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x46fcbe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "OnInstanceOperationDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.OnOperationDestroyNonCached
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*)>(&::UnityEngine::ResourceManagement::ResourceManager::OnOperationDestroyNonCached)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x46fcd24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "OnOperationDestroyNonCached",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.OnOperationDestroyCached
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*)>(&::UnityEngine::ResourceManagement::ResourceManager::OnOperationDestroyCached)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x46fcdf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "OnOperationDestroyCached",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.AddOperationToCache
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*)>(&::UnityEngine::ResourceManagement::ResourceManager::AddOperationToCache)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x46fd0a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "AddOperationToCache",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.RemoveOperationFromCache
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*)>(&::UnityEngine::ResourceManagement::ResourceManager::RemoveOperationFromCache)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x46fd02c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "RemoveOperationFromCache",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.IsOperationCached
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*)>(&::UnityEngine::ResourceManagement::ResourceManager::IsOperationCached)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x46fd12c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "IsOperationCached",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.CachedOperationCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::CachedOperationCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x46fd184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "CachedOperationCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.Release
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::ResourceManagement::ResourceManager::Release)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x46fd1d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "Release",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.Acquire
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::ResourceManagement::ResourceManager::Acquire)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x46fd290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "Acquire",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.AcquireGroupOpFromCache
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation* (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*)>(&::UnityEngine::ResourceManagement::ResourceManager::AcquireGroupOpFromCache)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x46fd374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "AcquireGroupOpFromCache",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.CreateGenericGroupOperation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> (::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*, bool)>(&::UnityEngine::ResourceManagement::ResourceManager::CreateGenericGroupOperation)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x46fd4b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "CreateGenericGroupOperation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ProvideResourceGroupCached
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> (::UnityEngine::ResourceManagement::ResourceManager::*)(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*, int32_t, ::System::Type*, ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*, bool)>(&::UnityEngine::ResourceManagement::ResourceManager::ProvideResourceGroupCached)> {
  constexpr static std::size_t size = 0x774;
  constexpr static std::size_t addrs = 0x46fc164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "ProvideResourceGroupCached",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ProvideScene
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneMode, bool, int32_t)>(&::UnityEngine::ResourceManagement::ResourceManager::ProvideScene)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x46fd8a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "ProvideScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ProvideScene
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneParameters, bool, int32_t)>(&::UnityEngine::ResourceManagement::ResourceManager::ProvideScene)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x46fd9f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "ProvideScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ReleaseScene
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)>(&::UnityEngine::ResourceManagement::ResourceManager::ReleaseScene)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x46fdb38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "ReleaseScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ProvideInstance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters)>(&::UnityEngine::ResourceManagement::ResourceManager::ProvideInstance)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x46fdc64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "ProvideInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.CleanupSceneInstances
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::SceneManagement::Scene)>(&::UnityEngine::ResourceManagement::ResourceManager::CleanupSceneInstances)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x46fdf40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "CleanupSceneInstances",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.ExecuteDeferredCallbacks
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::ExecuteDeferredCallbacks)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x46fe340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "ExecuteDeferredCallbacks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.RegisterForDeferredCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, bool)>(&::UnityEngine::ResourceManagement::ResourceManager::RegisterForDeferredCallback)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x46fe4f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "RegisterForDeferredCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(float_t)>(&::UnityEngine::ResourceManagement::ResourceManager::Update)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x46fe6fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)()>(&::UnityEngine::ResourceManagement::ResourceManager::Dispose)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x46feb0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceManager.__ctor_b__54_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceManager::*)(::UnityEngine::ResourceManagement::IUpdateReceiver*)>(&::UnityEngine::ResourceManagement::ResourceManager::__ctor_b__54_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x46fecc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "<.ctor>b__54_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::IUpdateReceiver*>::get()}
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::ResourceManagement::ResourceManager::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::ResourceManagement::ResourceManager::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr bool& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_postProfilerEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postProfilerEvents;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_postProfilerEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postProfilerEvents;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_postProfilerEvents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___postProfilerEvents = value;
}
constexpr ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get__InternalIdTransformFunc_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InternalIdTransformFunc_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*> const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get__InternalIdTransformFunc_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InternalIdTransformFunc_k__BackingField;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set__InternalIdTransformFunc_k__BackingField(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____InternalIdTransformFunc_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get__WebRequestOverride_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WebRequestOverride_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*> const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get__WebRequestOverride_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WebRequestOverride_k__BackingField;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set__WebRequestOverride_k__BackingField(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____WebRequestOverride_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_CallbackHooksEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CallbackHooksEnabled;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_CallbackHooksEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CallbackHooksEnabled;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_CallbackHooksEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CallbackHooksEnabled = value;
}
constexpr ::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_ResourceProviders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResourceProviders;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*> const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_ResourceProviders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResourceProviders;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_ResourceProviders(::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ResourceProviders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ResourceManagement::Util::IAllocationStrategy*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_allocator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_allocator;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*> const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_allocator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_allocator;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_allocator(::UnityEngine::ResourceManagement::Util::IAllocationStrategy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_allocator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_UpdateReceivers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateReceivers;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*> const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_UpdateReceivers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateReceivers;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_UpdateReceivers(::GlobalNamespace::ListWithEvents_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UpdateReceivers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_UpdateReceiversToRemove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateReceiversToRemove;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*> const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_UpdateReceiversToRemove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateReceiversToRemove;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_UpdateReceiversToRemove(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::IUpdateReceiver*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UpdateReceiversToRemove)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_UpdatingReceivers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdatingReceivers;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_UpdatingReceivers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdatingReceivers;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_UpdatingReceivers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UpdatingReceivers = value;
}
constexpr bool& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_InsideUpdateMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InsideUpdateMethod;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_InsideUpdateMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InsideUpdateMethod;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_InsideUpdateMethod(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InsideUpdateMethod = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_providerMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_providerMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*> const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_providerMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_providerMap;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_providerMap(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_providerMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*,::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_AssetOperationCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AssetOperationCache;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*,::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*> const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_AssetOperationCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AssetOperationCache;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_AssetOperationCache(::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*,::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AssetOperationCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_TrackedInstanceOperations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackedInstanceOperations;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>*> const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_TrackedInstanceOperations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackedInstanceOperations;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_TrackedInstanceOperations(::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::__ResourceManager__InstanceOperation*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TrackedInstanceOperations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::DelegateList_1<float_t>*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_UpdateCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DelegateList_1<float_t>*> const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_UpdateCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateCallbacks;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_UpdateCallbacks(::GlobalNamespace::DelegateList_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UpdateCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_DeferredCompleteCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeferredCompleteCallbacks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*> const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_DeferredCompleteCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeferredCompleteCallbacks;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_DeferredCompleteCallbacks(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DeferredCompleteCallbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_AssetBundleProviders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AssetBundleProviders;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*> const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_AssetBundleProviders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AssetBundleProviders;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_AssetBundleProviders(::System::Collections::Generic::HashSet_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AssetBundleProviders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_InsideExecuteDeferredCallbacksMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InsideExecuteDeferredCallbacksMethod;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_InsideExecuteDeferredCallbacksMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InsideExecuteDeferredCallbacksMethod;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_InsideExecuteDeferredCallbacksMethod(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InsideExecuteDeferredCallbacksMethod = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest>*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_DeferredCallbacksToRegister()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeferredCallbacksToRegister;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest>*> const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_DeferredCallbacksToRegister() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeferredCallbacksToRegister;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_DeferredCallbacksToRegister(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::__ResourceManager__DeferredCallbackRegisterRequest>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DeferredCallbacksToRegister)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType,int32_t,::System::Object*>*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_obsoleteDiagnosticsHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_obsoleteDiagnosticsHandler;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType,int32_t,::System::Object*>*> const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_obsoleteDiagnosticsHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_obsoleteDiagnosticsHandler;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_obsoleteDiagnosticsHandler(::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType,int32_t,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_obsoleteDiagnosticsHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_diagnosticsHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_diagnosticsHandler;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*> const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_diagnosticsHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_diagnosticsHandler;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_diagnosticsHandler(::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_diagnosticsHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_ReleaseOpNonCached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReleaseOpNonCached;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*> const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_ReleaseOpNonCached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReleaseOpNonCached;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_ReleaseOpNonCached(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ReleaseOpNonCached)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_ReleaseOpCached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReleaseOpCached;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*> const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_ReleaseOpCached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReleaseOpCached;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_ReleaseOpCached(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ReleaseOpCached)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_ReleaseInstanceOp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReleaseInstanceOp;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*> const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_ReleaseInstanceOp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReleaseInstanceOp;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_ReleaseInstanceOp(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ReleaseInstanceOp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Networking::CertificateHandler*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get__CertificateHandlerInstance_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CertificateHandlerInstance_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::CertificateHandler*> const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get__CertificateHandlerInstance_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CertificateHandlerInstance_k__BackingField;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set__CertificateHandlerInstance_k__BackingField(::UnityEngine::Networking::CertificateHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CertificateHandlerInstance_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_RegisteredForCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RegisteredForCallbacks;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_RegisteredForCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RegisteredForCallbacks;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_RegisteredForCallbacks(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RegisteredForCallbacks = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Type*>*& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_ProviderOperationTypeCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProviderOperationTypeCache;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Type*>*> const& UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_get_m_ProviderOperationTypeCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProviderOperationTypeCache;
}
constexpr void UnityEngine::ResourceManagement::ResourceManager::__cordl_internal_set_m_ProviderOperationTypeCache(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Type*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProviderOperationTypeCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::ResourceManagement::ResourceManager::setStaticF__ExceptionHandler_k__BackingField(::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>*, "<ExceptionHandler>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get>(std::forward<::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>*>(value));
}
inline ::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>* UnityEngine::ResourceManagement::ResourceManager::getStaticF__ExceptionHandler_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>*, "<ExceptionHandler>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get>();
}
inline void UnityEngine::ResourceManagement::ResourceManager::setStaticF_s_GroupOperationTypeHash(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_GroupOperationTypeHash", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::ResourceManagement::ResourceManager::getStaticF_s_GroupOperationTypeHash()  {
return ::cordl_internals::getStaticField<int32_t, "s_GroupOperationTypeHash", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get>();
}
inline void UnityEngine::ResourceManagement::ResourceManager::setStaticF_s_InstanceOperationTypeHash(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_InstanceOperationTypeHash", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::ResourceManagement::ResourceManager::getStaticF_s_InstanceOperationTypeHash()  {
return ::cordl_internals::getStaticField<int32_t, "s_InstanceOperationTypeHash", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get>();
}
inline ::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>* UnityEngine::ResourceManagement::ResourceManager::get_ExceptionHandler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "get_ExceptionHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::set_ExceptionHandler(::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "set_ExceptionHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::System::Exception*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>* UnityEngine::ResourceManagement::ResourceManager::get_InternalIdTransformFunc()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "get_InternalIdTransformFunc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::set_InternalIdTransformFunc(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "set_InternalIdTransformFunc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::ResourceManagement::ResourceManager::TransformInternalId(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "TransformInternalId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, location);
}
inline ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* UnityEngine::ResourceManagement::ResourceManager::get_WebRequestOverride()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "get_WebRequestOverride",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::set_WebRequestOverride(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "set_WebRequestOverride",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::ResourceManagement::ResourceManager::get_OperationCacheCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "get_OperationCacheCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::ResourceManagement::ResourceManager::get_InstanceOperationCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "get_InstanceOperationCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::AddUpdateReceiver(::UnityEngine::ResourceManagement::IUpdateReceiver*  receiver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "AddUpdateReceiver",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::IUpdateReceiver*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, receiver);
}
inline void UnityEngine::ResourceManagement::ResourceManager::RemoveUpdateReciever(::UnityEngine::ResourceManagement::IUpdateReceiver*  receiver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "RemoveUpdateReciever",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::IUpdateReceiver*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, receiver);
}
inline ::UnityEngine::ResourceManagement::Util::IAllocationStrategy* UnityEngine::ResourceManagement::ResourceManager::get_Allocator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "get_Allocator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::set_Allocator(::UnityEngine::ResourceManagement::Util::IAllocationStrategy*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "set_Allocator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>* UnityEngine::ResourceManagement::ResourceManager::get_ResourceProviders()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "get_ResourceProviders",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>*, false>(this, ___internal_method);
}
inline ::UnityEngine::Networking::CertificateHandler* UnityEngine::ResourceManagement::ResourceManager::get_CertificateHandlerInstance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "get_CertificateHandlerInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::CertificateHandler*, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::set_CertificateHandlerInstance(::UnityEngine::Networking::CertificateHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "set_CertificateHandlerInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::CertificateHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
/// @param alloc: ::UnityEngine::ResourceManagement::Util::IAllocationStrategy* (default: nullptr)
inline ::UnityEngine::ResourceManagement::ResourceManager* UnityEngine::ResourceManagement::ResourceManager::New_ctor(::UnityEngine::ResourceManagement::Util::IAllocationStrategy*  alloc)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::ResourceManager*>(alloc));
}
/// @param alloc: ::UnityEngine::ResourceManagement::Util::IAllocationStrategy* (default: nullptr)
inline void UnityEngine::ResourceManagement::ResourceManager::_ctor(::UnityEngine::ResourceManagement::Util::IAllocationStrategy*  alloc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IAllocationStrategy*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alloc);
}
inline void UnityEngine::ResourceManagement::ResourceManager::OnObjectAdded(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "OnObjectAdded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void UnityEngine::ResourceManagement::ResourceManager::OnObjectRemoved(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "OnObjectRemoved",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void UnityEngine::ResourceManagement::ResourceManager::RegisterForCallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "RegisterForCallbacks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::ClearDiagnosticsCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "ClearDiagnosticsCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::ClearDiagnosticCallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "ClearDiagnosticCallbacks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::UnregisterDiagnosticCallback(::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*  func)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "UnregisterDiagnosticCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, func);
}
inline void UnityEngine::ResourceManagement::ResourceManager::RegisterDiagnosticCallback(::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType,int32_t,::System::Object*>*  func)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "RegisterDiagnosticCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType,int32_t,::System::Object*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, func);
}
inline void UnityEngine::ResourceManagement::ResourceManager::RegisterDiagnosticCallback(::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*  func)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "RegisterDiagnosticCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, func);
}
inline void UnityEngine::ResourceManagement::ResourceManager::PostDiagnosticEvent(::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "PostDiagnosticEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* UnityEngine::ResourceManagement::ResourceManager::GetResourceProvider(::System::Type*  t, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "GetResourceProvider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, false>(this, ___internal_method, t, location);
}
inline ::System::Type* UnityEngine::ResourceManagement::ResourceManager::GetDefaultTypeForLocation(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  loc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "GetDefaultTypeForLocation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, loc);
}
/// @param t: ::System::Type* (default: nullptr)
inline int32_t UnityEngine::ResourceManagement::ResourceManager::CalculateLocationsHash(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations, ::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "CalculateLocationsHash",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, locations, t);
}
/// @param desiredType: ::System::Type* (default: nullptr)
/// @param releaseDependenciesOnFailure: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::ResourceManagement::ResourceManager::ProvideResource(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::System::Type*  desiredType, bool  releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "ProvideResource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, false>(this, ___internal_method, location, desiredType, releaseDependenciesOnFailure);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation* UnityEngine::ResourceManagement::ResourceManager::GetOperationFromCache(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::System::Type*  desiredType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "GetOperationFromCache",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*, false>(this, ___internal_method, location, desiredType);
}
/// @param desiredType: ::System::Type* (default: nullptr)
inline ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* UnityEngine::ResourceManagement::ResourceManager::CreateCacheKeyForLocation(::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*  provider, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::System::Type*  desiredType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "CreateCacheKeyForLocation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, false>(this, ___internal_method, provider, location, desiredType);
}
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::ResourceManager::ProvideResource(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                    "ProvideResource",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(this, ___internal_method, location);
}
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::ResourceManager::StartOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*  operation, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  dependency)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                    "StartOperation",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(this, ___internal_method, operation, dependency);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::ResourceManagement::ResourceManager::StartOperation(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  operation, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  dependency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "StartOperation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, false>(this, ___internal_method, operation, dependency);
}
inline void UnityEngine::ResourceManagement::ResourceManager::OnInstanceOperationDestroy(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "OnInstanceOperationDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline void UnityEngine::ResourceManagement::ResourceManager::OnOperationDestroyNonCached(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "OnOperationDestroyNonCached",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline void UnityEngine::ResourceManagement::ResourceManager::OnOperationDestroyCached(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "OnOperationDestroyCached",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
template<typename T>
inline T UnityEngine::ResourceManagement::ResourceManager::CreateOperation(::System::Type*  actualType, int32_t  typeHash, ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  cacheKey, ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  onDestroyAction)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                    "CreateOperation",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, actualType, typeHash, cacheKey, onDestroyAction);
}
inline void UnityEngine::ResourceManagement::ResourceManager::AddOperationToCache(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  key, ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  operation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "AddOperationToCache",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, operation);
}
inline bool UnityEngine::ResourceManagement::ResourceManager::RemoveOperationFromCache(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "RemoveOperationFromCache",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
inline bool UnityEngine::ResourceManagement::ResourceManager::IsOperationCached(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "IsOperationCached",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
inline int32_t UnityEngine::ResourceManagement::ResourceManager::CachedOperationCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "CachedOperationCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::ResourceManager::CreateCompletedOperation(TObject  result, ::StringW  errorMsg)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                    "CreateCompletedOperation",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(this, ___internal_method, result, errorMsg);
}
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::ResourceManager::CreateCompletedOperationWithException(TObject  result, ::System::Exception*  exception)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                    "CreateCompletedOperationWithException",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(this, ___internal_method, result, exception);
}
/// @param releaseDependenciesOnFailure: bool (default: true)
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::ResourceManager::CreateCompletedOperationInternal(TObject  result, bool  success, ::System::Exception*  exception, bool  releaseDependenciesOnFailure)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                    "CreateCompletedOperationInternal",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                    ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(this, ___internal_method, result, success, exception, releaseDependenciesOnFailure);
}
inline void UnityEngine::ResourceManagement::ResourceManager::Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "Release",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
inline void UnityEngine::ResourceManagement::ResourceManager::Acquire(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "Acquire",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation* UnityEngine::ResourceManagement::ResourceManager::AcquireGroupOpFromCache(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "AcquireGroupOpFromCache",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*, false>(this, ___internal_method, key);
}
template<typename T>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> UnityEngine::ResourceManagement::ResourceManager::CreateGroupOperation(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                    "CreateGroupOperation",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>, false>(this, ___internal_method, locations);
}
template<typename T>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> UnityEngine::ResourceManagement::ResourceManager::CreateGroupOperation(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations, bool  allowFailedDependencies)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                    "CreateGroupOperation",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>, false>(this, ___internal_method, locations, allowFailedDependencies);
}
/// @param releasedCachedOpOnComplete: bool (default: false)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> UnityEngine::ResourceManagement::ResourceManager::CreateGenericGroupOperation(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  operations, bool  releasedCachedOpOnComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "CreateGenericGroupOperation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>, false>(this, ___internal_method, operations, releasedCachedOpOnComplete);
}
/// @param releaseDependenciesOnFailure: bool (default: true)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> UnityEngine::ResourceManagement::ResourceManager::ProvideResourceGroupCached(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations, int32_t  groupHash, ::System::Type*  desiredType, ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  callback, bool  releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "ProvideResourceGroupCached",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>, false>(this, ___internal_method, locations, groupHash, desiredType, callback, releaseDependenciesOnFailure);
}
/// @param callback: ::System::Action_1<TObject>* (default: nullptr)
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> UnityEngine::ResourceManagement::ResourceManager::ProvideResources(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations, ::System::Action_1<TObject>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                    "ProvideResources",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TObject>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>, false>(this, ___internal_method, locations, callback);
}
/// @param callback: ::System::Action_1<TObject>* (default: nullptr)
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> UnityEngine::ResourceManagement::ResourceManager::ProvideResources(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations, bool  releaseDependenciesOnFailure, ::System::Action_1<TObject>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                    "ProvideResources",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                    ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TObject>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>, false>(this, ___internal_method, locations, releaseDependenciesOnFailure, callback);
}
template<typename TObject,typename TObjectDependency>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::ResourceManager::CreateChainOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>  dependentOp, ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                    "CreateChainOperation",
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObjectDependency>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObjectDependency>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(this, ___internal_method, dependentOp, callback);
}
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::ResourceManager::CreateChainOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  dependentOp, ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                    "CreateChainOperation",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(this, ___internal_method, dependentOp, callback);
}
/// @param releaseDependenciesOnFailure: bool (default: true)
template<typename TObject,typename TObjectDependency>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::ResourceManager::CreateChainOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>  dependentOp, ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  callback, bool  releaseDependenciesOnFailure)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                    "CreateChainOperation",
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObjectDependency>::get()},
                    ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObjectDependency>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(this, ___internal_method, dependentOp, callback, releaseDependenciesOnFailure);
}
/// @param releaseDependenciesOnFailure: bool (default: true)
template<typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::ResourceManager::CreateChainOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  dependentOp, ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  callback, bool  releaseDependenciesOnFailure)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                    "CreateChainOperation",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                    ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(this, ___internal_method, dependentOp, callback, releaseDependenciesOnFailure);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::ResourceManagement::ResourceManager::ProvideScene(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*  sceneProvider, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::UnityEngine::SceneManagement::LoadSceneMode  loadSceneMode, bool  activateOnLoad, int32_t  priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "ProvideScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(this, ___internal_method, sceneProvider, location, loadSceneMode, activateOnLoad, priority);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::ResourceManagement::ResourceManager::ProvideScene(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*  sceneProvider, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::UnityEngine::SceneManagement::LoadSceneParameters  loadSceneParameters, bool  activateOnLoad, int32_t  priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "ProvideScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(this, ___internal_method, sceneProvider, location, loadSceneParameters, activateOnLoad, priority);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::ResourceManagement::ResourceManager::ReleaseScene(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*  sceneProvider, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  sceneLoadHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "ReleaseScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(this, ___internal_method, sceneProvider, sceneLoadHandle);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> UnityEngine::ResourceManagement::ResourceManager::ProvideInstance(::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*  provider, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters  instantiateParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "ProvideInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>, false>(this, ___internal_method, provider, location, instantiateParameters);
}
inline void UnityEngine::ResourceManagement::ResourceManager::CleanupSceneInstances(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "CleanupSceneInstances",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scene);
}
inline void UnityEngine::ResourceManagement::ResourceManager::ExecuteDeferredCallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "ExecuteDeferredCallbacks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param incrementRefCount: bool (default: true)
inline void UnityEngine::ResourceManagement::ResourceManager::RegisterForDeferredCallback(::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*  op, bool  incrementRefCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "RegisterForDeferredCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op, incrementRefCount);
}
inline void UnityEngine::ResourceManagement::ResourceManager::Update(float_t  unscaledDeltaTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unscaledDeltaTime);
}
inline void UnityEngine::ResourceManagement::ResourceManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceManager::__ctor_b__54_0(::UnityEngine::ResourceManagement::IUpdateReceiver*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceManager*>::get(),
                        "<.ctor>b__54_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::IUpdateReceiver*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceManager::ResourceManager()   {
}
