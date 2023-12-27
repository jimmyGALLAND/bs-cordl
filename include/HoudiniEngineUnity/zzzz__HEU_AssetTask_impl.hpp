#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_AssetTask_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Task_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetTask_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ReloadEventData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_CookedEventData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetTask_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Task_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_AssetTask__BuildType::__HEU_AssetTask__BuildType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_AssetTask__BuildType::__HEU_AssetTask__BuildType() {}
constexpr ::HoudiniEngineUnity::__HEU_AssetTask__BuildType HoudiniEngineUnity::__HEU_AssetTask__BuildType::NONE{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::__HEU_AssetTask__BuildType HoudiniEngineUnity::__HEU_AssetTask__BuildType::LOAD{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::__HEU_AssetTask__BuildType HoudiniEngineUnity::__HEU_AssetTask__BuildType::COOK{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::__HEU_AssetTask__BuildType HoudiniEngineUnity::__HEU_AssetTask__BuildType::RELOAD{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetTask.GetTaskSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_SessionBase* (::HoudiniEngineUnity::HEU_AssetTask::*)()>(
    &::HoudiniEngineUnity::HEU_AssetTask::GetTaskSession)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x21aa848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(), "GetTaskSession",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetTask.DoTask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetTask::*)()>(&::HoudiniEngineUnity::HEU_AssetTask::DoTask)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x21aa8fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetTask.KillTask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetTask::*)()>(&::HoudiniEngineUnity::HEU_AssetTask::KillTask)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x21aaed4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetTask.CompleteTask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetTask::*)(::HoudiniEngineUnity::__HEU_Task__TaskResult)>(
    &::HoudiniEngineUnity::HEU_AssetTask::CompleteTask)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x21ab114;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetTask.CookCompletedCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetTask::*)(
    ::HoudiniEngineUnity::HEU_HoudiniAsset*, bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)>(&::HoudiniEngineUnity::HEU_AssetTask::CookCompletedCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21ab354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(), "CookCompletedCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetTask.CookCompletedCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetTask::*)(::HoudiniEngineUnity::HEU_CookedEventData*)>(
    &::HoudiniEngineUnity::HEU_AssetTask::CookCompletedCallback)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21ab3d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(), "CookCompletedCallback", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_CookedEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetTask.CookCompletedCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetTask::*)(::HoudiniEngineUnity::HEU_ReloadEventData*)>(
    &::HoudiniEngineUnity::HEU_AssetTask::CookCompletedCallback)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21ab3e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(), "CookCompletedCallback", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ReloadEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetTask._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_AssetTask::*)()>(&::HoudiniEngineUnity::HEU_AssetTask::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x21ab3f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::HoudiniEngineUnity::__HEU_AssetTask__BuildType& HoudiniEngineUnity::HEU_AssetTask::__get__buildType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____buildType;
}
constexpr ::HoudiniEngineUnity::__HEU_AssetTask__BuildType const& HoudiniEngineUnity::HEU_AssetTask::__get__buildType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____buildType;
}
constexpr void HoudiniEngineUnity::HEU_AssetTask::__set__buildType(::HoudiniEngineUnity::__HEU_AssetTask__BuildType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____buildType = value;
}
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset*& HoudiniEngineUnity::HEU_AssetTask::__get__asset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____asset;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_HoudiniAsset*> const& HoudiniEngineUnity::HEU_AssetTask::__get__asset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____asset;
}
constexpr void HoudiniEngineUnity::HEU_AssetTask::__set__asset(::HoudiniEngineUnity::HEU_HoudiniAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____asset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_AssetTask::__get__assetPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____assetPath;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_AssetTask::__get__assetPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____assetPath;
}
constexpr void HoudiniEngineUnity::HEU_AssetTask::__set__assetPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_AssetTask::__get__position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____position;
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_AssetTask::__get__position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____position;
}
constexpr void HoudiniEngineUnity::HEU_AssetTask::__set__position(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____position = value;
}
constexpr bool& HoudiniEngineUnity::HEU_AssetTask::__get__buildResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____buildResult;
}
constexpr bool const& HoudiniEngineUnity::HEU_AssetTask::__get__buildResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____buildResult;
}
constexpr void HoudiniEngineUnity::HEU_AssetTask::__set__buildResult(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____buildResult = value;
}
constexpr int64_t& HoudiniEngineUnity::HEU_AssetTask::__get__forceSessionID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____forceSessionID;
}
constexpr int64_t const& HoudiniEngineUnity::HEU_AssetTask::__get__forceSessionID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____forceSessionID;
}
constexpr void HoudiniEngineUnity::HEU_AssetTask::__set__forceSessionID(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____forceSessionID = value;
}
inline ::HoudiniEngineUnity::HEU_SessionBase* HoudiniEngineUnity::HEU_AssetTask::GetTaskSession() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(), "GetTaskSession",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_SessionBase*, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_AssetTask::DoTask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(), "DoTask",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_AssetTask::KillTask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(), "KillTask",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_AssetTask::CompleteTask(::HoudiniEngineUnity::__HEU_Task__TaskResult result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(), "CompleteTask", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_Task__TaskResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline void HoudiniEngineUnity::HEU_AssetTask::CookCompletedCallback(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, bool bSuccess,
                                                                     ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(), "CookCompletedCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asset, bSuccess, outputs);
}
inline void HoudiniEngineUnity::HEU_AssetTask::CookCompletedCallback(::HoudiniEngineUnity::HEU_CookedEventData* cookedEventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(), "CookCompletedCallback", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_CookedEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cookedEventData);
}
inline void HoudiniEngineUnity::HEU_AssetTask::CookCompletedCallback(::HoudiniEngineUnity::HEU_ReloadEventData* reloadEventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(), "CookCompletedCallback", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ReloadEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reloadEventData);
}
inline ::HoudiniEngineUnity::HEU_AssetTask* HoudiniEngineUnity::HEU_AssetTask::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_AssetTask*>());
}
inline void HoudiniEngineUnity::HEU_AssetTask::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetTask*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_AssetTask::HEU_AssetTask() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
