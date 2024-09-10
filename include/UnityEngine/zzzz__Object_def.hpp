#pragma once
// IWYU pragma private; include "UnityEngine/Object.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Object)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
class Type;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
template<typename T>
class AsyncInstantiateOperation_1;
}
namespace UnityEngine {
class AsyncInstantiateOperation;
}
namespace UnityEngine {
struct FindObjectsInactive;
}
namespace UnityEngine {
struct FindObjectsSortMode;
}
namespace UnityEngine {
struct HideFlags;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Object;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Object);
// Type: UnityEngine::Object
// SizeInfo { instance_size: 24, native_size: 8, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Object*
class CORDL_TYPE Object : public ::System::Object {
public:
// Declarations
/// @brief Field OffsetOfInstanceIDInCPlusPlusObject, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_OffsetOfInstanceIDInCPlusPlusObject, put=setStaticF_OffsetOfInstanceIDInCPlusPlusObject)) int32_t  OffsetOfInstanceIDInCPlusPlusObject;

 __declspec(property(get=get_hideFlags, put=set_hideFlags)) ::UnityEngine::HideFlags  hideFlags;

/// @brief Field m_CachedPtr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CachedPtr, put=__cordl_internal_set_m_CachedPtr)) ::System::IntPtr  m_CachedPtr;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

/// @brief Method CheckNullArgument, addr 0x481e2c4, size 0x4c, virtual false, abstract: false, final false
static inline void CheckNullArgument(::System::Object*  arg, ::StringW  message) ;

/// @brief Method CompareBaseObjects, addr 0x481dd84, size 0xa8, virtual false, abstract: false, final false
static inline bool CompareBaseObjects(::UnityEngine::Object*  lhs, ::UnityEngine::Object*  rhs) ;

/// @brief Method CurrentThreadIsMainThread, addr 0x481df6c, size 0x28, virtual false, abstract: false, final false
static inline bool CurrentThreadIsMainThread() ;

/// @brief Method Destroy, addr 0x481ead8, size 0x78, virtual false, abstract: false, final false
static inline void Destroy(::UnityEngine::Object*  obj) ;

/// @brief Method Destroy, addr 0x481ea8c, size 0x4c, virtual false, abstract: false, final false
static inline void Destroy(::UnityEngine::Object*  obj, float_t  t) ;

/// @brief Method DestroyImmediate, addr 0x481eb94, size 0x78, virtual false, abstract: false, final false
static inline void DestroyImmediate(::UnityEngine::Object*  obj) ;

/// @brief Method DestroyImmediate, addr 0x481eb50, size 0x44, virtual false, abstract: false, final false
static inline void DestroyImmediate(::UnityEngine::Object*  obj, bool  allowDestroyingAssets) ;

/// @brief Method DestroyObject, addr 0x481eee4, size 0x78, virtual false, abstract: false, final false
static inline void DestroyObject(::UnityEngine::Object*  obj) ;

/// @brief Method DestroyObject, addr 0x481ee60, size 0x84, virtual false, abstract: false, final false
static inline void DestroyObject(::UnityEngine::Object*  obj, float_t  t) ;

/// @brief Method DoesObjectWithInstanceIDExist, addr 0x481f638, size 0x3c, virtual false, abstract: false, final false
static inline bool DoesObjectWithInstanceIDExist(int32_t  instanceID) ;

/// @brief Method DontDestroyOnLoad, addr 0x481eda4, size 0x3c, virtual false, abstract: false, final false
static inline void DontDestroyOnLoad(::UnityEngine::Object*  target) ;

/// @brief Method EnsureRunningOnMainThread, addr 0x481deb0, size 0xbc, virtual false, abstract: false, final false
inline void EnsureRunningOnMainThread() ;

/// @brief Method Equals, addr 0x481dc24, size 0xfc, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method FindAnyObjectByType, addr 0x481f12c, size 0xa4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> FindAnyObjectByType(::System::Type*  type) ;

/// @brief Method FindAnyObjectByType, addr 0x481f324, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> FindAnyObjectByType(::System::Type*  type, ::UnityEngine::FindObjectsInactive  findObjectsInactive) ;

/// @brief Method FindAnyObjectByType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T FindAnyObjectByType() ;

/// @brief Method FindAnyObjectByType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T FindAnyObjectByType(::UnityEngine::FindObjectsInactive  findObjectsInactive) ;

/// @brief Method FindFirstObjectByType, addr 0x481f088, size 0xa4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> FindFirstObjectByType(::System::Type*  type) ;

/// @brief Method FindFirstObjectByType, addr 0x481f274, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> FindFirstObjectByType(::System::Type*  type, ::UnityEngine::FindObjectsInactive  findObjectsInactive) ;

/// @brief Method FindFirstObjectByType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T FindFirstObjectByType() ;

/// @brief Method FindFirstObjectByType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T FindFirstObjectByType(::UnityEngine::FindObjectsInactive  findObjectsInactive) ;

/// @brief Method FindObjectFromInstanceID, addr 0x481f674, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> FindObjectFromInstanceID(int32_t  instanceID) ;

/// @brief Method FindObjectOfType, addr 0x481eff0, size 0x98, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> FindObjectOfType(::System::Type*  type) ;

/// @brief Method FindObjectOfType, addr 0x481f1d0, size 0xa4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> FindObjectOfType(::System::Type*  type, bool  includeInactive) ;

/// @brief Method FindObjectOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T FindObjectOfType() ;

/// @brief Method FindObjectOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T FindObjectOfType(bool  includeInactive) ;

/// @brief Method FindObjectsByType, addr 0x481ed50, size 0x54, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*> FindObjectsByType(::System::Type*  type, ::UnityEngine::FindObjectsInactive  findObjectsInactive, ::UnityEngine::FindObjectsSortMode  sortMode) ;

/// @brief Method FindObjectsByType, addr 0x481ecc8, size 0x88, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*> FindObjectsByType(::System::Type*  type, ::UnityEngine::FindObjectsSortMode  sortMode) ;

/// @brief Method FindObjectsByType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> FindObjectsByType(::UnityEngine::FindObjectsInactive  findObjectsInactive, ::UnityEngine::FindObjectsSortMode  sortMode) ;

/// @brief Method FindObjectsByType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> FindObjectsByType(::UnityEngine::FindObjectsSortMode  sortMode) ;

/// @brief Method FindObjectsOfType, addr 0x481ec0c, size 0x78, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*> FindObjectsOfType(::System::Type*  type) ;

/// @brief Method FindObjectsOfType, addr 0x481ec84, size 0x44, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*> FindObjectsOfType(::System::Type*  type, bool  includeInactive) ;

/// @brief Method FindObjectsOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> FindObjectsOfType() ;

/// @brief Method FindObjectsOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> FindObjectsOfType(bool  includeInactive) ;

/// @brief Method FindObjectsOfTypeAll, addr 0x481efec, size 0x4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*> FindObjectsOfTypeAll(::System::Type*  type) ;

/// @brief Method FindObjectsOfTypeIncludingAssets, addr 0x481efb0, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*> FindObjectsOfTypeIncludingAssets(::System::Type*  type) ;

/// @brief Method FindSceneObjectsOfType, addr 0x481ef5c, size 0x54, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*> FindSceneObjectsOfType(::System::Type*  type) ;

/// @brief Method ForceLoadFromInstanceID, addr 0x481f6b0, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> ForceLoadFromInstanceID(int32_t  instanceID) ;

/// @brief Method GetCachedPtr, addr 0x481df94, size 0x8, virtual false, abstract: false, final false
inline ::System::IntPtr GetCachedPtr() ;

/// @brief Method GetHashCode, addr 0x481dc1c, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetInstanceID, addr 0x481dadc, size 0x118, virtual false, abstract: false, final false
inline int32_t GetInstanceID() ;

/// @brief Method GetName, addr 0x481e010, size 0x3c, virtual false, abstract: false, final false
static inline ::StringW GetName(::UnityEngine::Object*  obj) ;

/// @brief Method GetOffsetOfInstanceIDInCPlusPlusObject, addr 0x481dbf4, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetOffsetOfInstanceIDInCPlusPlusObject() ;

/// @brief Method Instantiate, addr 0x481e5f4, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object*  original) ;

/// @brief Method Instantiate, addr 0x481e888, size 0x68, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object*  original, ::UnityEngine::Transform*  parent) ;

/// @brief Method Instantiate, addr 0x481e8f0, size 0x148, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object*  original, ::UnityEngine::Transform*  parent, bool  instantiateInWorldSpace) ;

/// @brief Method Instantiate, addr 0x481e114, size 0x1b0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object*  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method Instantiate, addr 0x481e3a8, size 0x1a4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object*  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Transform*  parent) ;

/// @brief Method Instantiate, addr 0x481e720, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object*  original, ::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Instantiate(T  original) ;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Instantiate(T  original, ::UnityEngine::Transform*  parent) ;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Instantiate(T  original, ::UnityEngine::Transform*  parent, bool  worldPositionStays) ;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Instantiate(T  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Instantiate(T  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Transform*  parent) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original, int32_t  count) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original, int32_t  count, ::UnityEngine::Transform*  parent) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original, int32_t  count, ::UnityEngine::Transform*  parent, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original, int32_t  count, ::UnityEngine::Transform*  parent, ::System::ReadOnlySpan_1<::UnityEngine::Vector3>  positions, ::System::ReadOnlySpan_1<::UnityEngine::Quaternion>  rotations) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original, int32_t  count, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original, int32_t  count, ::System::ReadOnlySpan_1<::UnityEngine::Vector3>  positions, ::System::ReadOnlySpan_1<::UnityEngine::Quaternion>  rotations) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original, ::UnityEngine::Transform*  parent) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original, ::UnityEngine::Transform*  parent, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method InstantiateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::AsyncInstantiateOperation_1<T>* InstantiateAsync(T  original, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method Internal_CloneSingle, addr 0x481e6e4, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_CloneSingle(::UnityEngine::Object*  data) ;

/// @brief Method Internal_CloneSingleWithParent, addr 0x481ea38, size 0x54, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_CloneSingleWithParent(::UnityEngine::Object*  data, ::UnityEngine::Transform*  parent, bool  worldPositionStays) ;

/// @brief Method Internal_CloneSingleWithScene, addr 0x481e800, size 0x88, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_CloneSingleWithScene(::UnityEngine::Object*  data, ::UnityEngine::SceneManagement::Scene  scene) ;

/// @brief Method Internal_CloneSingleWithScene_Injected, addr 0x481f484, size 0x44, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_CloneSingleWithScene_Injected(::UnityEngine::Object*  data, ByRef<::UnityEngine::SceneManagement::Scene>  scene) ;

/// @brief Method Internal_InstantiateAsyncWithParent, addr 0x481f4c8, size 0x84, virtual false, abstract: false, final false
static inline ::UnityEngine::AsyncInstantiateOperation* Internal_InstantiateAsyncWithParent(::UnityEngine::Object*  original, int32_t  count, ::UnityEngine::Transform*  parent, ::System::IntPtr  positions, int32_t  positionsCount, ::System::IntPtr  rotations, int32_t  rotationsCount) ;

/// @brief Method Internal_InstantiateSingle, addr 0x481e310, size 0x98, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_InstantiateSingle(::UnityEngine::Object*  data, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method Internal_InstantiateSingleWithParent, addr 0x481e54c, size 0xa8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_InstantiateSingleWithParent(::UnityEngine::Object*  data, ::UnityEngine::Transform*  parent, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method Internal_InstantiateSingleWithParent_Injected, addr 0x481f5a0, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_InstantiateSingleWithParent_Injected(::UnityEngine::Object*  data, ::UnityEngine::Transform*  parent, ByRef<::UnityEngine::Vector3>  pos, ByRef<::UnityEngine::Quaternion>  rot) ;

/// @brief Method Internal_InstantiateSingle_Injected, addr 0x481f54c, size 0x54, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> Internal_InstantiateSingle_Injected(::UnityEngine::Object*  data, ByRef<::UnityEngine::Vector3>  pos, ByRef<::UnityEngine::Quaternion>  rot) ;

/// @brief Method IsNativeObjectAlive, addr 0x481de90, size 0x20, virtual false, abstract: false, final false
static inline bool IsNativeObjectAlive(::UnityEngine::Object*  o) ;

/// @brief Method IsPersistent, addr 0x481f5fc, size 0x3c, virtual false, abstract: false, final false
static inline bool IsPersistent(::UnityEngine::Object*  obj) ;

/// @brief Method MarkDirty, addr 0x481f6ec, size 0x3c, virtual false, abstract: false, final false
inline void MarkDirty() ;

static inline ::UnityEngine::Object* New_ctor() ;

/// @brief Method SetName, addr 0x481e0d0, size 0x44, virtual false, abstract: false, final false
static inline void SetName(::UnityEngine::Object*  obj, ::StringW  name) ;

/// @brief Method ToString, addr 0x481f3d4, size 0x74, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x481f448, size 0x3c, virtual false, abstract: false, final false
static inline ::StringW ToString(::UnityEngine::Object*  obj) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_CachedPtr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_CachedPtr() ;

constexpr void __cordl_internal_set_m_CachedPtr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x48178cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_OffsetOfInstanceIDInCPlusPlusObject() ;

/// @brief Method get_hideFlags, addr 0x481ede0, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::HideFlags get_hideFlags() ;

/// @brief Method get_name, addr 0x481df9c, size 0x74, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method op_Equality, addr 0x481dd20, size 0x64, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::Object*  x, ::UnityEngine::Object*  y) ;

/// @brief Method op_Implicit, addr 0x481de2c, size 0x64, virtual false, abstract: false, final false
static inline bool op_Implicit_bool(::UnityEngine::Object*  exists) ;

/// @brief Method op_Inequality, addr 0x4819a10, size 0x70, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::Object*  x, ::UnityEngine::Object*  y) ;

static inline void setStaticF_OffsetOfInstanceIDInCPlusPlusObject(int32_t  value) ;

/// @brief Method set_hideFlags, addr 0x481ee1c, size 0x44, virtual false, abstract: false, final false
inline void set_hideFlags(::UnityEngine::HideFlags  value) ;

/// @brief Method set_name, addr 0x481e04c, size 0x84, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Object() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Object", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Object(Object && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Object", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Object(Object const& ) = delete;

/// @brief Field m_CachedPtr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_CachedPtr;

/// @brief Field cloneDestroyedMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  cloneDestroyedMessage{u"Instantiate failed because the clone was destroyed during creation. This can happen if DestroyImmediate is called in MonoBehaviour.Awake."};

/// @brief Field objectIsNullMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  objectIsNullMessage{u"The Object you want to instantiate is null."};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Object, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Object, ___m_CachedPtr) == 0x10, "Offset mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Object);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Object*, "UnityEngine", "Object");
