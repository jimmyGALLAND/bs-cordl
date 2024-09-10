#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/AsyncOperations/GroupOperation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__GroupOperation_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GroupOperation)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class ICachable;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct __GroupOperation__GroupOperationSettings;
}
namespace UnityEngine::ResourceManagement::Util {
class IOperationCacheKey;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct __GroupOperation__GroupOperationSettings;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class GroupOperation;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::AsyncOperations::__GroupOperation__GroupOperationSettings);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation);
// Type: ::GroupOperationSettings
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: true
// CS Name: ::GroupOperation::GroupOperationSettings
struct CORDL_TYPE __GroupOperation__GroupOperationSettings {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____GroupOperation__GroupOperationSettings_Unwrapped
enum struct ____GroupOperation__GroupOperationSettings_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ReleaseDependenciesOnFailure = static_cast<int32_t>(0x1),
__E_AllowFailedDependencies = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ____GroupOperation__GroupOperationSettings_Unwrapped () const noexcept {
return static_cast<____GroupOperation__GroupOperationSettings_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr __GroupOperation__GroupOperationSettings() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __GroupOperation__GroupOperationSettings(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field AllowFailedDependencies value: static_cast<int32_t>(0x2)
static ::UnityEngine::ResourceManagement::AsyncOperations::__GroupOperation__GroupOperationSettings const AllowFailedDependencies;

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::ResourceManagement::AsyncOperations::__GroupOperation__GroupOperationSettings const None;

/// @brief Field ReleaseDependenciesOnFailure value: static_cast<int32_t>(0x1)
static ::UnityEngine::ResourceManagement::AsyncOperations::__GroupOperation__GroupOperationSettings const ReleaseDependenciesOnFailure;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::AsyncOperations::__GroupOperation__GroupOperationSettings, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::__GroupOperation__GroupOperationSettings, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
// Type: UnityEngine.ResourceManagement.AsyncOperations::GroupOperation
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: false
// CS Name: ::UnityEngine.ResourceManagement.AsyncOperations::GroupOperation*
class CORDL_TYPE GroupOperation : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> {
public:
// Declarations
using GroupOperationSettings = ::UnityEngine::ResourceManagement::AsyncOperations::__GroupOperation__GroupOperationSettings;

 __declspec(property(get=get_DebugName)) ::StringW  DebugName;

 __declspec(property(get=get_Progress)) float_t  Progress;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Key, put=UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Key)) ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key;

/// @brief Field <UnityEngine.ResourceManagement.AsyncOperations.ICachable.Key>k__BackingField, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField, put=__cordl_internal_set__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField)) ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  _UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField;

/// @brief Field debugName, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugName, put=__cordl_internal_set_debugName)) ::StringW  debugName;

/// @brief Field m_CachedDependencyLocations, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CachedDependencyLocations, put=__cordl_internal_set_m_CachedDependencyLocations)) ::System::Collections::Generic::HashSet_1<::StringW>*  m_CachedDependencyLocations;

/// @brief Field m_InternalOnComplete, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InternalOnComplete, put=__cordl_internal_set_m_InternalOnComplete)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  m_InternalOnComplete;

/// @brief Field m_LoadedCount, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LoadedCount, put=__cordl_internal_set_m_LoadedCount)) int32_t  m_LoadedCount;

/// @brief Field m_Settings, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Settings, put=__cordl_internal_set_m_Settings)) ::UnityEngine::ResourceManagement::AsyncOperations::__GroupOperation__GroupOperationSettings  m_Settings;

/// @brief Convert operator to "::UnityEngine::ResourceManagement::AsyncOperations::ICachable"
constexpr operator  ::UnityEngine::ResourceManagement::AsyncOperations::ICachable*() noexcept;

/// @brief Method CompleteIfDependenciesComplete, addr 0x4713d2c, size 0x2f4, virtual false, abstract: false, final false
inline void CompleteIfDependenciesComplete() ;

/// @brief Method DependenciesAreUnchanged, addr 0x4713674, size 0x1d4, virtual false, abstract: false, final false
inline bool DependenciesAreUnchanged(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  deps) ;

/// @brief Method Destroy, addr 0x4714020, size 0x10, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method Execute, addr 0x4713b1c, size 0x210, virtual true, abstract: false, final false
inline void Execute() ;

/// @brief Method GetDependencies, addr 0x4713168, size 0x64, virtual true, abstract: false, final false
inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  deps) ;

/// @brief Method GetDependentOps, addr 0x46fd7b0, size 0x3c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* GetDependentOps() ;

/// @brief Method GetDownloadStatus, addr 0x4713418, size 0x25c, virtual true, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited) ;

/// @brief Method Init, addr 0x46fd6d0, size 0xb0, virtual false, abstract: false, final false
inline void Init(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  operations, bool  releaseDependenciesOnFailure, bool  allowFailedDependencies) ;

/// @brief Method Init, addr 0x471421c, size 0x98, virtual false, abstract: false, final false
inline void Init(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  operations, ::UnityEngine::ResourceManagement::AsyncOperations::__GroupOperation__GroupOperationSettings  settings) ;

/// @brief Method InvokeWaitForCompletion, addr 0x4712d84, size 0x3d4, virtual true, abstract: false, final false
inline bool InvokeWaitForCompletion() ;

static inline ::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation* New_ctor() ;

/// @brief Method OnOperationCompleted, addr 0x47142b4, size 0x10, virtual false, abstract: false, final false
inline void OnOperationCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  op) ;

/// @brief Method ReleaseDependencies, addr 0x47131cc, size 0x24c, virtual true, abstract: false, final false
inline void ReleaseDependencies() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.ICachable.get_Key, addr 0x4713158, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Key() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.ICachable.set_Key, addr 0x4713160, size 0x8, virtual true, abstract: false, final true
inline void UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Key(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  value) ;

constexpr ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*& __cordl_internal_get__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*> const& __cordl_internal_get__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField() const;

constexpr ::StringW const& __cordl_internal_get_debugName() const;

constexpr ::StringW& __cordl_internal_get_debugName() ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get_m_CachedDependencyLocations() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __cordl_internal_get_m_CachedDependencyLocations() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_m_InternalOnComplete() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const& __cordl_internal_get_m_InternalOnComplete() const;

constexpr int32_t const& __cordl_internal_get_m_LoadedCount() const;

constexpr int32_t& __cordl_internal_get_m_LoadedCount() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::__GroupOperation__GroupOperationSettings const& __cordl_internal_get_m_Settings() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::__GroupOperation__GroupOperationSettings& __cordl_internal_get_m_Settings() ;

constexpr void __cordl_internal_set__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  value) ;

constexpr void __cordl_internal_set_debugName(::StringW  value) ;

constexpr void __cordl_internal_set_m_CachedDependencyLocations(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_m_InternalOnComplete(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr void __cordl_internal_set_m_LoadedCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_Settings(::UnityEngine::ResourceManagement::AsyncOperations::__GroupOperation__GroupOperationSettings  value) ;

/// @brief Method .ctor, addr 0x4712c4c, size 0x138, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DebugName, addr 0x4713848, size 0x2d4, virtual true, abstract: false, final false
inline ::StringW get_DebugName() ;

/// @brief Method get_Progress, addr 0x4714030, size 0x1ec, virtual true, abstract: false, final false
inline float_t get_Progress() ;

/// @brief Convert to "::UnityEngine::ResourceManagement::AsyncOperations::ICachable"
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::ICachable* i___UnityEngine__ResourceManagement__AsyncOperations__ICachable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GroupOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GroupOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GroupOperation(GroupOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GroupOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GroupOperation(GroupOperation const& ) = delete;

/// @brief Field m_InternalOnComplete, offset: 0x98, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  ___m_InternalOnComplete;

/// @brief Field m_LoadedCount, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___m_LoadedCount;

/// @brief Field m_Settings, offset: 0xa4, size: 0x4, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::__GroupOperation__GroupOperationSettings  ___m_Settings;

/// @brief Field debugName, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ___debugName;

/// @brief Field <UnityEngine.ResourceManagement.AsyncOperations.ICachable.Key>k__BackingField, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*  ____UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField;

/// @brief Field m_CachedDependencyLocations, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ___m_CachedDependencyLocations;

/// @brief Field k_MaxDisplayedLocationLength offset 0xffffffff size 0x4
static constexpr int32_t  k_MaxDisplayedLocationLength{static_cast<int32_t>(0x2d)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation, 0xc0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation, ___m_InternalOnComplete) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation, ___m_LoadedCount) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation, ___m_Settings) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation, ___debugName) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation, ____UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation, ___m_CachedDependencyLocations) == 0xb8, "Offset mismatch!");

} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::AsyncOperations::__GroupOperation__GroupOperationSettings, "UnityEngine.ResourceManagement.AsyncOperations", "GroupOperation/GroupOperationSettings");
NEED_NO_BOX(::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::AsyncOperations::GroupOperation*, "UnityEngine.ResourceManagement.AsyncOperations", "GroupOperation");
