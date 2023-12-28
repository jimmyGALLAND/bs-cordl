#pragma once
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_impl.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ChainOperationTypelessDepedency_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_DepOp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepOp;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_DepOp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepOp;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__set_m_DepOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepOp = value;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>& UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_WrappedOp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WrappedOp;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> const&
UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_WrappedOp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WrappedOp;
}
template <typename TObject>
constexpr void
UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__set_m_WrappedOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WrappedOp = value;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus& UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_depStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_depStatus;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus const& UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_depStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_depStatus;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__set_m_depStatus(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_depStatus = value;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus& UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_wrapStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_wrapStatus;
}
template <typename TObject>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus const& UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_wrapStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_wrapStatus;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__set_m_wrapStatus(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_wrapStatus = value;
}
template <typename TObject>
constexpr ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*&
UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_Callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
template <typename TObject>
constexpr ::cordl_internals::to_const_pointer<
    ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*> const&
UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_Callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__set_m_Callback(
    ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObject>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*&
UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_CachedOnWrappedCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedOnWrappedCompleted;
}
template <typename TObject>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*> const&
UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_CachedOnWrappedCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedOnWrappedCompleted;
}
template <typename TObject>
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__set_m_CachedOnWrappedCompleted(
    ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CachedOnWrappedCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TObject> constexpr bool& UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_ReleaseDependenciesOnFailure() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReleaseDependenciesOnFailure;
}
template <typename TObject> constexpr bool const& UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_ReleaseDependenciesOnFailure() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReleaseDependenciesOnFailure;
}
template <typename TObject> constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__set_m_ReleaseDependenciesOnFailure(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReleaseDependenciesOnFailure = value;
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>* UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>());
}
template <typename TObject> inline void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject> inline ::StringW UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::get_DebugName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>::get(),
                                               "get_DebugName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::GetDependencies(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>::get(), "GetDependencies", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deps);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::Init(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependentOp,
    ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* callback,
    bool releaseDependenciesOnFailure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>::get(), "Init", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dependentOp, callback, releaseDependenciesOnFailure);
}
template <typename TObject> inline bool UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::InvokeWaitForCompletion() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>::get(),
                                               "InvokeWaitForCompletion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::Execute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>::get(), "Execute",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject>
inline void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::OnWrappedCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>::get(), "OnWrappedCompleted", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::Destroy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>::get(), "Destroy",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject> inline void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::ReleaseDependencies() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>::get(),
                                               "ReleaseDependencies", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TObject>
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus
UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>::get(), "GetDownloadStatus", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(this, ___internal_method, visited);
}
/// @param visited: ::System::Collections::Generic::HashSet_1<::System::Object*>* (default: nullptr)
template <typename TObject>
inline void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::RefreshDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>::get(), "RefreshDownloadStatus",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visited);
}
template <typename TObject> inline float_t UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::get_Progress() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>*>::get(),
                                               "get_Progress", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TObject> constexpr ::UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::ChainOperationTypelessDepedency_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
