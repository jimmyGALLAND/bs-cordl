#pragma once
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
class Object;
}
namespace System {
class Type;
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
// SizeInfo { instance_size: 24, native_size: 8, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Object*
class CORDL_TYPE Object : public ::System::Object {
public:
  // Declarations
  /// @brief Field OffsetOfInstanceIDInCPlusPlusObject, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_OffsetOfInstanceIDInCPlusPlusObject, put = setStaticF_OffsetOfInstanceIDInCPlusPlusObject)) int32_t OffsetOfInstanceIDInCPlusPlusObject;

  __declspec(property(get = get_hideFlags, put = set_hideFlags))::UnityEngine::HideFlags hideFlags;

  /// @brief Field m_CachedPtr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CachedPtr, put = __cordl_internal_set_m_CachedPtr)) void* m_CachedPtr;

  __declspec(property(get = get_name, put = set_name))::StringW name;

  /// @brief Method CheckNullArgument, addr 0x320699c, size 0x54, virtual false, abstract: false, final false
  static inline void CheckNullArgument(::System::Object* arg, ::StringW message);

  /// @brief Method CompareBaseObjects, addr 0x320641c, size 0xa0, virtual false, abstract: false, final false
  static inline bool CompareBaseObjects(::UnityEngine::Object* lhs, ::UnityEngine::Object* rhs);

  /// @brief Method CurrentThreadIsMainThread, addr 0x320663c, size 0x28, virtual false, abstract: false, final false
  static inline bool CurrentThreadIsMainThread();

  /// @brief Method Destroy, addr 0x320705c, size 0x78, virtual false, abstract: false, final false
  static inline void Destroy(::UnityEngine::Object* obj);

  /// @brief Method Destroy, addr 0x3207010, size 0x4c, virtual false, abstract: false, final false
  static inline void Destroy(::UnityEngine::Object* obj, float_t t);

  /// @brief Method DestroyImmediate, addr 0x3207118, size 0x78, virtual false, abstract: false, final false
  static inline void DestroyImmediate(::UnityEngine::Object* obj);

  /// @brief Method DestroyImmediate, addr 0x32070d4, size 0x44, virtual false, abstract: false, final false
  static inline void DestroyImmediate(::UnityEngine::Object* obj, bool allowDestroyingAssets);

  /// @brief Method DestroyObject, addr 0x320738c, size 0x78, virtual false, abstract: false, final false
  static inline void DestroyObject(::UnityEngine::Object* obj);

  /// @brief Method DestroyObject, addr 0x3207308, size 0x84, virtual false, abstract: false, final false
  static inline void DestroyObject(::UnityEngine::Object* obj, float_t t);

  /// @brief Method DoesObjectWithInstanceIDExist, addr 0x3207774, size 0x3c, virtual false, abstract: false, final false
  static inline bool DoesObjectWithInstanceIDExist(int32_t instanceID);

  /// @brief Method DontDestroyOnLoad, addr 0x320724c, size 0x3c, virtual false, abstract: false, final false
  static inline void DontDestroyOnLoad(::UnityEngine::Object* target);

  /// @brief Method EnsureRunningOnMainThread, addr 0x320657c, size 0xc0, virtual false, abstract: false, final false
  inline void EnsureRunningOnMainThread();

  /// @brief Method Equals, addr 0x3206320, size 0xfc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method FindObjectFromInstanceID, addr 0x32077b0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> FindObjectFromInstanceID(int32_t instanceID);

  /// @brief Method FindObjectOfType, addr 0x320749c, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> FindObjectOfType(::System::Type* type);

  /// @brief Method FindObjectOfType, addr 0x3207534, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> FindObjectOfType(::System::Type* type, bool includeInactive);

  /// @brief Method FindObjectOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T FindObjectOfType();

  /// @brief Method FindObjectOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T FindObjectOfType(bool includeInactive);

  /// @brief Method FindObjectsOfType, addr 0x3207190, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> FindObjectsOfType(::System::Type* type);

  /// @brief Method FindObjectsOfType, addr 0x3207208, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> FindObjectsOfType(::System::Type* type, bool includeInactive);

  /// @brief Method FindObjectsOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> FindObjectsOfType();

  /// @brief Method FindObjectsOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> FindObjectsOfType(bool includeInactive);

  /// @brief Method FindObjectsOfTypeAll, addr 0x3207494, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> FindObjectsOfTypeAll(::System::Type* type);

  /// @brief Method FindObjectsOfTypeIncludingAssets, addr 0x3207458, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> FindObjectsOfTypeIncludingAssets(::System::Type* type);

  /// @brief Method FindSceneObjectsOfType, addr 0x3207404, size 0x54, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> FindSceneObjectsOfType(::System::Type* type);

  /// @brief Method ForceLoadFromInstanceID, addr 0x32077ec, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> ForceLoadFromInstanceID(int32_t instanceID);

  /// @brief Method GetCachedPtr, addr 0x3206664, size 0x8, virtual false, abstract: false, final false
  inline void* GetCachedPtr();

  /// @brief Method GetHashCode, addr 0x3206318, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetInstanceID, addr 0x31f729c, size 0x134, virtual false, abstract: false, final false
  inline int32_t GetInstanceID();

  /// @brief Method GetName, addr 0x32066e0, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW GetName(::UnityEngine::Object* obj);

  /// @brief Method GetOffsetOfInstanceIDInCPlusPlusObject, addr 0x32062f0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetOffsetOfInstanceIDInCPlusPlusObject();

  /// @brief Method Instantiate, addr 0x3206cd8, size 0xf4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object* original);

  /// @brief Method Instantiate, addr 0x3206e08, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object* original, ::UnityEngine::Transform* parent);

  /// @brief Method Instantiate, addr 0x3206e70, size 0x14c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object* original, ::UnityEngine::Transform* parent, bool instantiateInWorldSpace);

  /// @brief Method Instantiate, addr 0x32067e4, size 0x1b8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object* original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method Instantiate, addr 0x3206a88, size 0x1a8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Instantiate(::UnityEngine::Object* original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent);

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Instantiate(T original);

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Instantiate(T original, ::UnityEngine::Transform* parent);

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Instantiate(T original, ::UnityEngine::Transform* parent, bool worldPositionStays);

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Instantiate(T original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Instantiate(T original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent);

  /// @brief Method Internal_CloneSingle, addr 0x3206dcc, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Internal_CloneSingle(::UnityEngine::Object* data);

  /// @brief Method Internal_CloneSingleWithParent, addr 0x3206fbc, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Internal_CloneSingleWithParent(::UnityEngine::Object* data, ::UnityEngine::Transform* parent, bool worldPositionStays);

  /// @brief Method Internal_InstantiateSingle, addr 0x32069f0, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Internal_InstantiateSingle(::UnityEngine::Object* data, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot);

  /// @brief Method Internal_InstantiateSingleWithParent, addr 0x3206c30, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Internal_InstantiateSingleWithParent(::UnityEngine::Object* data, ::UnityEngine::Transform* parent, ::UnityEngine::Vector3 pos,
                                                                                     ::UnityEngine::Quaternion rot);

  /// @brief Method Internal_InstantiateSingleWithParent_Injected, addr 0x32076dc, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Internal_InstantiateSingleWithParent_Injected(::UnityEngine::Object* data, ::UnityEngine::Transform* parent, ByRef<::UnityEngine::Vector3> pos,
                                                                                              ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method Internal_InstantiateSingle_Injected, addr 0x3207688, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Internal_InstantiateSingle_Injected(::UnityEngine::Object* data, ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method IsNativeObjectAlive, addr 0x3206520, size 0x5c, virtual false, abstract: false, final false
  static inline bool IsNativeObjectAlive(::UnityEngine::Object* o);

  /// @brief Method IsPersistent, addr 0x3207738, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsPersistent(::UnityEngine::Object* obj);

  static inline ::UnityEngine::Object* New_ctor();

  /// @brief Method SetName, addr 0x32067a0, size 0x44, virtual false, abstract: false, final false
  static inline void SetName(::UnityEngine::Object* obj, ::StringW name);

  /// @brief Method ToString, addr 0x32075d8, size 0x74, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x320764c, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW ToString(::UnityEngine::Object* obj);

  constexpr void* const& __cordl_internal_get_m_CachedPtr() const;

  constexpr void*& __cordl_internal_get_m_CachedPtr();

  constexpr void __cordl_internal_set_m_CachedPtr(void* value);

  /// @brief Method .ctor, addr 0x31ffabc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_OffsetOfInstanceIDInCPlusPlusObject();

  /// @brief Method get_hideFlags, addr 0x3207288, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::HideFlags get_hideFlags();

  /// @brief Method get_name, addr 0x320666c, size 0x74, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method op_Equality, addr 0x31ff004, size 0x64, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Object* x, ::UnityEngine::Object* y);

  /// @brief Method op_Implicit, addr 0x32064bc, size 0x64, virtual false, abstract: false, final false
  static inline bool op_Implicit_bool(::UnityEngine::Object* exists);

  /// @brief Method op_Inequality, addr 0x31f722c, size 0x70, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Object* x, ::UnityEngine::Object* y);

  static inline void setStaticF_OffsetOfInstanceIDInCPlusPlusObject(int32_t value);

  /// @brief Method set_hideFlags, addr 0x32072c4, size 0x44, virtual false, abstract: false, final false
  inline void set_hideFlags(::UnityEngine::HideFlags value);

  /// @brief Method set_name, addr 0x320671c, size 0x84, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Object();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Object", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Object(Object&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Object", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Object(Object const&) = delete;

  /// @brief Field m_CachedPtr, offset: 0x10, size: 0x8, def value: None
  void* ___m_CachedPtr;

  /// @brief Field cloneDestroyedMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString cloneDestroyedMessage{ u"Instantiate failed because the clone was destroyed during creation. This can happen if DestroyImmediate is called in MonoBehaviour.Awake." };

  /// @brief Field objectIsNullMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString objectIsNullMessage{ u"The Object you want to instantiate is null." };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Object, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Object, ___m_CachedPtr) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Object);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Object*, "UnityEngine", "Object");
