#pragma once
// IWYU pragma private; include "UnityEngine/Physics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Physics)
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
template<typename T>
struct __NativeArray_1__ReadOnly;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
struct ContactPairHeader;
}
namespace UnityEngine {
struct ContactPair;
}
namespace UnityEngine {
struct MeshColliderCookingOptions;
}
namespace UnityEngine {
struct ModifiableContactPair;
}
namespace UnityEngine {
struct PhysicsScene;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct QueryTriggerInteraction;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct SimulationMode;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class __Physics__ContactEventDelegate;
}
// Forward declare root types
namespace UnityEngine {
class Physics;
}
namespace UnityEngine {
class __Physics__ContactEventDelegate;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Physics);
MARK_REF_PTR_T(::UnityEngine::__Physics__ContactEventDelegate);
// Type: ::ContactEventDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::Physics::ContactEventDelegate*
class CORDL_TYPE __Physics__ContactEventDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x486f140, size 0xbc, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::PhysicsScene  scene, ::Unity::Collections::__NativeArray_1__ReadOnly<::UnityEngine::ContactPairHeader>  headerArray, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x486f1fc, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x486f128, size 0x18, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::PhysicsScene  scene, ::Unity::Collections::__NativeArray_1__ReadOnly<::UnityEngine::ContactPairHeader>  headerArray) ;

static inline ::UnityEngine::__Physics__ContactEventDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x486f09c, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Physics__ContactEventDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Physics__ContactEventDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Physics__ContactEventDelegate(__Physics__ContactEventDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Physics__ContactEventDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Physics__ContactEventDelegate(__Physics__ContactEventDelegate const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Physics__ContactEventDelegate, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine
// Type: UnityEngine::Physics
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Physics*
class CORDL_TYPE Physics : public ::System::Object {
public:
// Declarations
using ContactEventDelegate = ::UnityEngine::__Physics__ContactEventDelegate;

/// @brief Field ContactEvent, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_ContactEvent, put=setStaticF_ContactEvent)) ::UnityEngine::__Physics__ContactEventDelegate*  ContactEvent;

/// @brief Field ContactModifyEvent, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_ContactModifyEvent, put=setStaticF_ContactModifyEvent)) ::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  ContactModifyEvent;

/// @brief Field ContactModifyEventCCD, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_ContactModifyEventCCD, put=setStaticF_ContactModifyEventCCD)) ::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  ContactModifyEventCCD;

/// @brief Field s_ReusableCollision, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_ReusableCollision, put=setStaticF_s_ReusableCollision)) ::UnityEngine::Collision*  s_ReusableCollision;

/// @brief Method BakeMesh, addr 0x486ddc4, size 0x88, virtual false, abstract: false, final false
static inline void BakeMesh(int32_t  meshID, bool  convex) ;

/// @brief Method BakeMesh, addr 0x486dd70, size 0x54, virtual false, abstract: false, final false
static inline void BakeMesh(int32_t  meshID, bool  convex, ::UnityEngine::MeshColliderCookingOptions  cookingOptions) ;

/// @brief Method BoxCast, addr 0x4867424, size 0xfc, virtual false, abstract: false, final false
static inline bool BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction) ;

/// @brief Method BoxCast, addr 0x4867964, size 0x104, virtual false, abstract: false, final false
static inline bool BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ByRef<::UnityEngine::RaycastHit>  hitInfo) ;

/// @brief Method BoxCast, addr 0x4867858, size 0x10c, virtual false, abstract: false, final false
static inline bool BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ByRef<::UnityEngine::RaycastHit>  hitInfo, ::UnityEngine::Quaternion  orientation) ;

/// @brief Method BoxCast, addr 0x4867730, size 0x128, virtual false, abstract: false, final false
static inline bool BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ByRef<::UnityEngine::RaycastHit>  hitInfo, ::UnityEngine::Quaternion  orientation, float_t  maxDistance) ;

/// @brief Method BoxCast, addr 0x48675fc, size 0x134, virtual false, abstract: false, final false
static inline bool BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ByRef<::UnityEngine::RaycastHit>  hitInfo, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method BoxCast, addr 0x4867520, size 0xdc, virtual false, abstract: false, final false
static inline bool BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ByRef<::UnityEngine::RaycastHit>  hitInfo, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method BoxCast, addr 0x4867320, size 0x104, virtual false, abstract: false, final false
static inline bool BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::UnityEngine::Quaternion  orientation) ;

/// @brief Method BoxCast, addr 0x4867200, size 0x120, virtual false, abstract: false, final false
static inline bool BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::UnityEngine::Quaternion  orientation, float_t  maxDistance) ;

/// @brief Method BoxCast, addr 0x48670dc, size 0x124, virtual false, abstract: false, final false
static inline bool BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method BoxCast, addr 0x4866fc0, size 0xec, virtual false, abstract: false, final false
static inline bool BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method BoxCastAll, addr 0x486d848, size 0xf8, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> BoxCastAll(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction) ;

/// @brief Method BoxCastAll, addr 0x486d748, size 0x100, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> BoxCastAll(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::UnityEngine::Quaternion  orientation) ;

/// @brief Method BoxCastAll, addr 0x486d628, size 0x120, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> BoxCastAll(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::UnityEngine::Quaternion  orientation, float_t  maxDistance) ;

/// @brief Method BoxCastAll, addr 0x486d504, size 0x124, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> BoxCastAll(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method BoxCastAll, addr 0x486d354, size 0x1b0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> BoxCastAll(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method BoxCastNonAlloc, addr 0x486d0e0, size 0x100, virtual false, abstract: false, final false
static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results) ;

/// @brief Method BoxCastNonAlloc, addr 0x486cd7c, size 0x108, virtual false, abstract: false, final false
static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, ::UnityEngine::Quaternion  orientation) ;

/// @brief Method BoxCastNonAlloc, addr 0x486ce84, size 0x128, virtual false, abstract: false, final false
static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, ::UnityEngine::Quaternion  orientation, float_t  maxDistance) ;

/// @brief Method BoxCastNonAlloc, addr 0x486cfac, size 0x134, virtual false, abstract: false, final false
static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method BoxCastNonAlloc, addr 0x486cb6c, size 0xe4, virtual false, abstract: false, final false
static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CapsuleCast, addr 0x48661ac, size 0x104, virtual false, abstract: false, final false
static inline bool CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction) ;

/// @brief Method CapsuleCast, addr 0x48665d8, size 0x10c, virtual false, abstract: false, final false
static inline bool CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ByRef<::UnityEngine::RaycastHit>  hitInfo) ;

/// @brief Method CapsuleCast, addr 0x48664bc, size 0x11c, virtual false, abstract: false, final false
static inline bool CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance) ;

/// @brief Method CapsuleCast, addr 0x4866394, size 0x128, virtual false, abstract: false, final false
static inline bool CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method CapsuleCast, addr 0x48662b0, size 0xe4, virtual false, abstract: false, final false
static inline bool CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CapsuleCast, addr 0x4866098, size 0x114, virtual false, abstract: false, final false
static inline bool CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance) ;

/// @brief Method CapsuleCast, addr 0x4865f80, size 0x118, virtual false, abstract: false, final false
static inline bool CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method CapsuleCast, addr 0x4865e6c, size 0xf4, virtual false, abstract: false, final false
static inline bool CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CapsuleCastAll, addr 0x4868f50, size 0x100, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> CapsuleCastAll(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction) ;

/// @brief Method CapsuleCastAll, addr 0x4868e3c, size 0x114, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> CapsuleCastAll(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance) ;

/// @brief Method CapsuleCastAll, addr 0x4868d24, size 0x118, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> CapsuleCastAll(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method CapsuleCastAll, addr 0x4868ba0, size 0x184, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> CapsuleCastAll(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CapsuleCastNonAlloc, addr 0x486b24c, size 0x108, virtual false, abstract: false, final false
static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results) ;

/// @brief Method CapsuleCastNonAlloc, addr 0x486b130, size 0x11c, virtual false, abstract: false, final false
static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance) ;

/// @brief Method CapsuleCastNonAlloc, addr 0x486b008, size 0x128, virtual false, abstract: false, final false
static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method CapsuleCastNonAlloc, addr 0x486ade8, size 0xec, virtual false, abstract: false, final false
static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CheckBox, addr 0x486c1c4, size 0xec, virtual false, abstract: false, final false
static inline bool CheckBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents) ;

/// @brief Method CheckBox, addr 0x486c0d0, size 0xf4, virtual false, abstract: false, final false
static inline bool CheckBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  orientation) ;

/// @brief Method CheckBox, addr 0x486bfd0, size 0x100, virtual false, abstract: false, final false
static inline bool CheckBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  orientation, int32_t  layerMask) ;

/// @brief Method CheckBox, addr 0x486bf0c, size 0xc4, virtual false, abstract: false, final false
static inline bool CheckBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  orientation, int32_t  layermask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CheckBox_Internal, addr 0x486bdd8, size 0xc0, virtual false, abstract: false, final false
static inline bool CheckBox_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  orientation, int32_t  layermask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CheckBox_Internal_Injected, addr 0x486be98, size 0x74, virtual false, abstract: false, final false
static inline bool CheckBox_Internal_Injected(ByRef<::UnityEngine::PhysicsScene>  physicsScene, ByRef<::UnityEngine::Vector3>  center, ByRef<::UnityEngine::Vector3>  halfExtents, ByRef<::UnityEngine::Quaternion>  orientation, int32_t  layermask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CheckCapsule, addr 0x486bd2c, size 0xac, virtual false, abstract: false, final false
static inline bool CheckCapsule(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  radius) ;

/// @brief Method CheckCapsule, addr 0x486bc7c, size 0xb0, virtual false, abstract: false, final false
static inline bool CheckCapsule(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  radius, int32_t  layerMask) ;

/// @brief Method CheckCapsule, addr 0x486bbb8, size 0xc4, virtual false, abstract: false, final false
static inline bool CheckCapsule(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CheckCapsule_Internal, addr 0x486ba78, size 0xc4, virtual false, abstract: false, final false
static inline bool CheckCapsule_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CheckCapsule_Internal_Injected, addr 0x486bb3c, size 0x7c, virtual false, abstract: false, final false
static inline bool CheckCapsule_Internal_Injected(ByRef<::UnityEngine::PhysicsScene>  physicsScene, ByRef<::UnityEngine::Vector3>  start, ByRef<::UnityEngine::Vector3>  end, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CheckSphere, addr 0x486ad64, size 0x84, virtual false, abstract: false, final false
static inline bool CheckSphere(::UnityEngine::Vector3  position, float_t  radius) ;

/// @brief Method CheckSphere, addr 0x486acdc, size 0x88, virtual false, abstract: false, final false
static inline bool CheckSphere(::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask) ;

/// @brief Method CheckSphere, addr 0x486ac40, size 0x9c, virtual false, abstract: false, final false
static inline bool CheckSphere(::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CheckSphere_Internal, addr 0x486ab1c, size 0xb8, virtual false, abstract: false, final false
static inline bool CheckSphere_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CheckSphere_Internal_Injected, addr 0x486abd4, size 0x6c, virtual false, abstract: false, final false
static inline bool CheckSphere_Internal_Injected(ByRef<::UnityEngine::PhysicsScene>  physicsScene, ByRef<::UnityEngine::Vector3>  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method ClosestPoint, addr 0x486a5d8, size 0xc8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3  point, ::UnityEngine::Collider*  collider, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method ComputePenetration, addr 0x486a384, size 0x128, virtual false, abstract: false, final false
static inline bool ComputePenetration(::UnityEngine::Collider*  colliderA, ::UnityEngine::Vector3  positionA, ::UnityEngine::Quaternion  rotationA, ::UnityEngine::Collider*  colliderB, ::UnityEngine::Vector3  positionB, ::UnityEngine::Quaternion  rotationB, ByRef<::UnityEngine::Vector3>  direction, ByRef<float_t>  distance) ;

/// @brief Method GetActorAngularVelocity, addr 0x486e21c, size 0x94, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetActorAngularVelocity(::System::IntPtr  actorPtr) ;

/// @brief Method GetActorAngularVelocity_Injected, addr 0x486e2b0, size 0x44, virtual false, abstract: false, final false
static inline void GetActorAngularVelocity_Injected(::System::IntPtr  actorPtr, ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method GetActorLinearVelocity, addr 0x486e144, size 0x94, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetActorLinearVelocity(::System::IntPtr  actorPtr) ;

/// @brief Method GetActorLinearVelocity_Injected, addr 0x486e1d8, size 0x44, virtual false, abstract: false, final false
static inline void GetActorLinearVelocity_Injected(::System::IntPtr  actorPtr, ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method GetBodyByInstanceID, addr 0x486df78, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Component> GetBodyByInstanceID(int32_t  instanceID) ;

/// @brief Method GetColliderByInstanceID, addr 0x486df3c, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Collider> GetColliderByInstanceID(int32_t  instanceID) ;

/// @brief Method GetCollisionToReport, addr 0x486eecc, size 0x124, virtual false, abstract: false, final false
static inline ::UnityEngine::Collision* GetCollisionToReport(ByRef<::UnityEngine::ContactPairHeader>  header, ByRef<::UnityEngine::ContactPair>  pair, bool  flipped) ;

/// @brief Method GetIgnoreCollision, addr 0x4864a58, size 0x44, virtual false, abstract: false, final false
static inline bool GetIgnoreCollision(::UnityEngine::Collider*  collider1, ::UnityEngine::Collider*  collider2) ;

/// @brief Method GetIgnoreLayerCollision, addr 0x4864a14, size 0x44, virtual false, abstract: false, final false
static inline bool GetIgnoreLayerCollision(int32_t  layer1, int32_t  layer2) ;

/// @brief Method IgnoreCollision, addr 0x48648b0, size 0x88, virtual false, abstract: false, final false
static inline void IgnoreCollision(::UnityEngine::Collider*  collider1, ::UnityEngine::Collider*  collider2) ;

/// @brief Method IgnoreCollision, addr 0x486485c, size 0x54, virtual false, abstract: false, final false
static inline void IgnoreCollision(::UnityEngine::Collider*  collider1, ::UnityEngine::Collider*  collider2, bool  ignore) ;

/// @brief Method IgnoreLayerCollision, addr 0x486498c, size 0x88, virtual false, abstract: false, final false
static inline void IgnoreLayerCollision(int32_t  layer1, int32_t  layer2) ;

/// @brief Method IgnoreLayerCollision, addr 0x4864938, size 0x54, virtual false, abstract: false, final false
static inline void IgnoreLayerCollision(int32_t  layer1, int32_t  layer2, bool  ignore) ;

/// @brief Method Internal_BoxCastAll, addr 0x486d1e0, size 0xe0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> Internal_BoxCastAll(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_BoxCastAll_Injected, addr 0x486d2c0, size 0x94, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> Internal_BoxCastAll_Injected(ByRef<::UnityEngine::PhysicsScene>  physicsScene, ByRef<::UnityEngine::Vector3>  center, ByRef<::UnityEngine::Vector3>  halfExtents, ByRef<::UnityEngine::Vector3>  direction, ByRef<::UnityEngine::Quaternion>  orientation, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_RaycastAll, addr 0x4867a68, size 0xa8, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> Internal_RaycastAll(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_RaycastAll_Injected, addr 0x4867b10, size 0x6c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> Internal_RaycastAll_Injected(ByRef<::UnityEngine::PhysicsScene>  physicsScene, ByRef<::UnityEngine::Ray>  ray, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_RebuildBroadphaseRegions, addr 0x486db88, size 0x84, virtual false, abstract: false, final false
static inline void Internal_RebuildBroadphaseRegions(::UnityEngine::Bounds  bounds, int32_t  subdivisions) ;

/// @brief Method Internal_RebuildBroadphaseRegions_Injected, addr 0x486dc0c, size 0x44, virtual false, abstract: false, final false
static inline void Internal_RebuildBroadphaseRegions_Injected(ByRef<::UnityEngine::Bounds>  bounds, int32_t  subdivisions) ;

/// @brief Method InterpolateBodies_Internal, addr 0x4869fbc, size 0x78, virtual false, abstract: false, final false
static inline void InterpolateBodies_Internal(::UnityEngine::PhysicsScene  physicsScene) ;

/// @brief Method InterpolateBodies_Internal_Injected, addr 0x486a034, size 0x3c, virtual false, abstract: false, final false
static inline void InterpolateBodies_Internal_Injected(ByRef<::UnityEngine::PhysicsScene>  physicsScene) ;

/// @brief Method IsShapeTrigger, addr 0x486e03c, size 0x3c, virtual false, abstract: false, final false
static inline bool IsShapeTrigger(::System::IntPtr  shapePtr) ;

/// @brief Method Linecast, addr 0x4865b50, size 0x9c, virtual false, abstract: false, final false
static inline bool Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end) ;

/// @brief Method Linecast, addr 0x4865dc8, size 0xa4, virtual false, abstract: false, final false
static inline bool Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ByRef<::UnityEngine::RaycastHit>  hitInfo) ;

/// @brief Method Linecast, addr 0x4865d18, size 0xb0, virtual false, abstract: false, final false
static inline bool Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ByRef<::UnityEngine::RaycastHit>  hitInfo, int32_t  layerMask) ;

/// @brief Method Linecast, addr 0x4865bec, size 0x12c, virtual false, abstract: false, final false
static inline bool Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ByRef<::UnityEngine::RaycastHit>  hitInfo, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Linecast, addr 0x4865ab0, size 0xa0, virtual false, abstract: false, final false
static inline bool Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, int32_t  layerMask) ;

/// @brief Method Linecast, addr 0x4865994, size 0x11c, virtual false, abstract: false, final false
static inline bool Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

static inline ::UnityEngine::Physics* New_ctor() ;

/// @brief Method OnSceneContact, addr 0x486e874, size 0x258, virtual false, abstract: false, final false
static inline void OnSceneContact(::UnityEngine::PhysicsScene  scene, ::System::IntPtr  buffer, int32_t  count) ;

/// @brief Method OnSceneContactModify, addr 0x486409c, size 0xe4, virtual false, abstract: false, final false
static inline void OnSceneContactModify(::UnityEngine::PhysicsScene  scene, ::System::IntPtr  buffer, int32_t  count, bool  isCCD) ;

/// @brief Method OverlapBox, addr 0x486c698, size 0xe8, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents) ;

/// @brief Method OverlapBox, addr 0x486c5a4, size 0xf4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  orientation) ;

/// @brief Method OverlapBox, addr 0x486c4a4, size 0x100, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  orientation, int32_t  layerMask) ;

/// @brief Method OverlapBox, addr 0x486c3e0, size 0xc4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  orientation, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapBoxNonAlloc, addr 0x486ca7c, size 0xf0, virtual false, abstract: false, final false
static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results) ;

/// @brief Method OverlapBoxNonAlloc, addr 0x486c978, size 0x104, virtual false, abstract: false, final false
static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, ::UnityEngine::Quaternion  orientation) ;

/// @brief Method OverlapBoxNonAlloc, addr 0x486c870, size 0x108, virtual false, abstract: false, final false
static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, ::UnityEngine::Quaternion  orientation, int32_t  mask) ;

/// @brief Method OverlapBoxNonAlloc, addr 0x486c780, size 0xd4, virtual false, abstract: false, final false
static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, ::UnityEngine::Quaternion  orientation, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapBox_Internal, addr 0x486c2b0, size 0xbc, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  orientation, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapBox_Internal_Injected, addr 0x486c36c, size 0x74, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox_Internal_Injected(ByRef<::UnityEngine::PhysicsScene>  physicsScene, ByRef<::UnityEngine::Vector3>  center, ByRef<::UnityEngine::Vector3>  halfExtents, ByRef<::UnityEngine::Quaternion>  orientation, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapCapsule, addr 0x4869a7c, size 0xac, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapCapsule(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius) ;

/// @brief Method OverlapCapsule, addr 0x48699cc, size 0xb0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapCapsule(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, int32_t  layerMask) ;

/// @brief Method OverlapCapsule, addr 0x4869908, size 0xc4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapCapsule(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapCapsuleNonAlloc, addr 0x486dad4, size 0xb4, virtual false, abstract: false, final false
static inline int32_t OverlapCapsuleNonAlloc(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results) ;

/// @brief Method OverlapCapsuleNonAlloc, addr 0x486da14, size 0xc0, virtual false, abstract: false, final false
static inline int32_t OverlapCapsuleNonAlloc(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, int32_t  layerMask) ;

/// @brief Method OverlapCapsuleNonAlloc, addr 0x486d940, size 0xcc, virtual false, abstract: false, final false
static inline int32_t OverlapCapsuleNonAlloc(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapCapsule_Internal, addr 0x48697cc, size 0xc0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapCapsule_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapCapsule_Internal_Injected, addr 0x486988c, size 0x7c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapCapsule_Internal_Injected(ByRef<::UnityEngine::PhysicsScene>  physicsScene, ByRef<::UnityEngine::Vector3>  point0, ByRef<::UnityEngine::Vector3>  point1, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphere, addr 0x4869d6c, size 0x84, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapSphere(::UnityEngine::Vector3  position, float_t  radius) ;

/// @brief Method OverlapSphere, addr 0x4869ce4, size 0x88, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapSphere(::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask) ;

/// @brief Method OverlapSphere, addr 0x4869c48, size 0x9c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapSphere(::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphereNonAlloc, addr 0x486aa90, size 0x8c, virtual false, abstract: false, final false
static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results) ;

/// @brief Method OverlapSphereNonAlloc, addr 0x486a9f8, size 0x98, virtual false, abstract: false, final false
static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, int32_t  layerMask) ;

/// @brief Method OverlapSphereNonAlloc, addr 0x486a94c, size 0xa4, virtual false, abstract: false, final false
static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphere_Internal, addr 0x4869b28, size 0xb4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapSphere_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphere_Internal_Injected, addr 0x4869bdc, size 0x6c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapSphere_Internal_Injected(ByRef<::UnityEngine::PhysicsScene>  physicsScene, ByRef<::UnityEngine::Vector3>  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Query_CapsuleCastAll, addr 0x4868a38, size 0xdc, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> Query_CapsuleCastAll(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Query_CapsuleCastAll_Injected, addr 0x4868b14, size 0x8c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> Query_CapsuleCastAll_Injected(ByRef<::UnityEngine::PhysicsScene>  physicsScene, ByRef<::UnityEngine::Vector3>  p0, ByRef<::UnityEngine::Vector3>  p1, float_t  radius, ByRef<::UnityEngine::Vector3>  direction, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Query_ClosestPoint, addr 0x486a4ac, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Query_ClosestPoint(::UnityEngine::Collider*  collider, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  point) ;

/// @brief Method Query_ClosestPoint_Injected, addr 0x486a56c, size 0x6c, virtual false, abstract: false, final false
static inline void Query_ClosestPoint_Injected(::UnityEngine::Collider*  collider, ByRef<::UnityEngine::Vector3>  position, ByRef<::UnityEngine::Quaternion>  rotation, ByRef<::UnityEngine::Vector3>  point, ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method Query_ComputePenetration, addr 0x486a214, size 0xe4, virtual false, abstract: false, final false
static inline bool Query_ComputePenetration(::UnityEngine::Collider*  colliderA, ::UnityEngine::Vector3  positionA, ::UnityEngine::Quaternion  rotationA, ::UnityEngine::Collider*  colliderB, ::UnityEngine::Vector3  positionB, ::UnityEngine::Quaternion  rotationB, ByRef<::UnityEngine::Vector3>  direction, ByRef<float_t>  distance) ;

/// @brief Method Query_ComputePenetration_Injected, addr 0x486a2f8, size 0x8c, virtual false, abstract: false, final false
static inline bool Query_ComputePenetration_Injected(::UnityEngine::Collider*  colliderA, ByRef<::UnityEngine::Vector3>  positionA, ByRef<::UnityEngine::Quaternion>  rotationA, ::UnityEngine::Collider*  colliderB, ByRef<::UnityEngine::Vector3>  positionB, ByRef<::UnityEngine::Quaternion>  rotationB, ByRef<::UnityEngine::Vector3>  direction, ByRef<float_t>  distance) ;

/// @brief Method Query_SphereCastAll, addr 0x4869050, size 0xc8, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> Query_SphereCastAll(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Query_SphereCastAll_Injected, addr 0x4869118, size 0x84, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> Query_SphereCastAll_Injected(ByRef<::UnityEngine::PhysicsScene>  physicsScene, ByRef<::UnityEngine::Vector3>  origin, float_t  radius, ByRef<::UnityEngine::Vector3>  direction, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0x4864ed0, size 0xb8, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction) ;

/// @brief Method Raycast, addr 0x48653f0, size 0xc8, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ByRef<::UnityEngine::RaycastHit>  hitInfo) ;

/// @brief Method Raycast, addr 0x4865328, size 0xc8, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance) ;

/// @brief Method Raycast, addr 0x486524c, size 0xdc, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method Raycast, addr 0x4864f88, size 0xd8, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0x4864e08, size 0xc8, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance) ;

/// @brief Method Raycast, addr 0x4864d44, size 0xc4, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method Raycast, addr 0x4864a9c, size 0xd8, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0x4865674, size 0x88, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray) ;

/// @brief Method Raycast, addr 0x4865904, size 0x90, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, ByRef<::UnityEngine::RaycastHit>  hitInfo) ;

/// @brief Method Raycast, addr 0x4865864, size 0xa0, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance) ;

/// @brief Method Raycast, addr 0x48657ac, size 0xb8, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method Raycast, addr 0x48656fc, size 0xb0, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0x48655ec, size 0x88, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, float_t  maxDistance) ;

/// @brief Method Raycast, addr 0x4865550, size 0x9c, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method Raycast, addr 0x48654b8, size 0x98, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method RaycastAll, addr 0x4867efc, size 0xa4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction) ;

/// @brief Method RaycastAll, addr 0x4867e50, size 0xac, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance) ;

/// @brief Method RaycastAll, addr 0x4867da0, size 0xb0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method RaycastAll, addr 0x4867b7c, size 0x224, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method RaycastAll, addr 0x48681a8, size 0x9c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray  ray) ;

/// @brief Method RaycastAll, addr 0x4868104, size 0xa4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray  ray, float_t  maxDistance) ;

/// @brief Method RaycastAll, addr 0x4868054, size 0xb0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method RaycastAll, addr 0x4867fa0, size 0xb4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method RaycastNonAlloc, addr 0x4868974, size 0xc4, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results) ;

/// @brief Method RaycastNonAlloc, addr 0x48688b0, size 0xc4, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance) ;

/// @brief Method RaycastNonAlloc, addr 0x48687d8, size 0xd8, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method RaycastNonAlloc, addr 0x4868704, size 0xd4, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method RaycastNonAlloc, addr 0x4868678, size 0x8c, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results) ;

/// @brief Method RaycastNonAlloc, addr 0x48685dc, size 0x9c, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance) ;

/// @brief Method RaycastNonAlloc, addr 0x4868544, size 0x98, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method RaycastNonAlloc, addr 0x4868244, size 0xac, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method RebuildBroadphaseRegions, addr 0x486dc50, size 0x120, virtual false, abstract: false, final false
static inline void RebuildBroadphaseRegions(::UnityEngine::Bounds  worldBounds, int32_t  subdivisions) ;

/// @brief Method ReportContacts, addr 0x486eacc, size 0x3d0, virtual false, abstract: false, final false
static inline void ReportContacts(::Unity::Collections::__NativeArray_1__ReadOnly<::UnityEngine::ContactPairHeader>  array) ;

/// @brief Method ResetInterpolationPoses_Internal, addr 0x486a070, size 0x78, virtual false, abstract: false, final false
static inline void ResetInterpolationPoses_Internal(::UnityEngine::PhysicsScene  physicsScene) ;

/// @brief Method ResetInterpolationPoses_Internal_Injected, addr 0x486a0e8, size 0x3c, virtual false, abstract: false, final false
static inline void ResetInterpolationPoses_Internal_Injected(ByRef<::UnityEngine::PhysicsScene>  physicsScene) ;

/// @brief Method ResolveActorToComponent, addr 0x486de88, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Component> ResolveActorToComponent(::System::IntPtr  actorPtr) ;

/// @brief Method ResolveActorToInstanceID, addr 0x486df00, size 0x3c, virtual false, abstract: false, final false
static inline int32_t ResolveActorToInstanceID(::System::IntPtr  actorPtr) ;

/// @brief Method ResolveShapeToCollider, addr 0x486de4c, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Collider> ResolveShapeToCollider(::System::IntPtr  shapePtr) ;

/// @brief Method ResolveShapeToInstanceID, addr 0x486dec4, size 0x3c, virtual false, abstract: false, final false
static inline int32_t ResolveShapeToInstanceID(::System::IntPtr  shapePtr) ;

/// @brief Method SendOnCollisionEnter, addr 0x486e078, size 0x44, virtual false, abstract: false, final false
static inline void SendOnCollisionEnter(::UnityEngine::Component*  component, ::UnityEngine::Collision*  collision) ;

/// @brief Method SendOnCollisionExit, addr 0x486e100, size 0x44, virtual false, abstract: false, final false
static inline void SendOnCollisionExit(::UnityEngine::Component*  component, ::UnityEngine::Collision*  collision) ;

/// @brief Method SendOnCollisionStay, addr 0x486e0bc, size 0x44, virtual false, abstract: false, final false
static inline void SendOnCollisionStay(::UnityEngine::Component*  component, ::UnityEngine::Collision*  collision) ;

/// @brief Method Simulate, addr 0x4869ecc, size 0xf0, virtual false, abstract: false, final false
static inline void Simulate(float_t  step) ;

/// @brief Method Simulate_Internal, addr 0x4869df0, size 0x90, virtual false, abstract: false, final false
static inline void Simulate_Internal(::UnityEngine::PhysicsScene  physicsScene, float_t  step) ;

/// @brief Method Simulate_Internal_Injected, addr 0x4869e80, size 0x4c, virtual false, abstract: false, final false
static inline void Simulate_Internal_Injected(ByRef<::UnityEngine::PhysicsScene>  physicsScene, float_t  step) ;

/// @brief Method SphereCast, addr 0x4866944, size 0xbc, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ByRef<::UnityEngine::RaycastHit>  hitInfo) ;

/// @brief Method SphereCast, addr 0x4866888, size 0xbc, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance) ;

/// @brief Method SphereCast, addr 0x48667c0, size 0xc8, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method SphereCast, addr 0x48666e4, size 0xd4, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method SphereCast, addr 0x4866c30, size 0xa4, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Ray  ray, float_t  radius) ;

/// @brief Method SphereCast, addr 0x4866f0c, size 0xb4, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Ray  ray, float_t  radius, ByRef<::UnityEngine::RaycastHit>  hitInfo) ;

/// @brief Method SphereCast, addr 0x4866e58, size 0xb4, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Ray  ray, float_t  radius, ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance) ;

/// @brief Method SphereCast, addr 0x4866da0, size 0xb8, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Ray  ray, float_t  radius, ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method SphereCast, addr 0x4866cd4, size 0xcc, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Ray  ray, float_t  radius, ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method SphereCast, addr 0x4866b8c, size 0xa4, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Ray  ray, float_t  radius, float_t  maxDistance) ;

/// @brief Method SphereCast, addr 0x4866adc, size 0xb0, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Ray  ray, float_t  radius, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method SphereCast, addr 0x4866a00, size 0xdc, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Ray  ray, float_t  radius, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method SphereCastAll, addr 0x4869470, size 0xb4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction) ;

/// @brief Method SphereCastAll, addr 0x48693bc, size 0xb4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance) ;

/// @brief Method SphereCastAll, addr 0x4869304, size 0xb8, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method SphereCastAll, addr 0x486919c, size 0x168, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method SphereCastAll, addr 0x486972c, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Ray  ray, float_t  radius) ;

/// @brief Method SphereCastAll, addr 0x486968c, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Ray  ray, float_t  radius, float_t  maxDistance) ;

/// @brief Method SphereCastAll, addr 0x48695e0, size 0xac, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Ray  ray, float_t  radius, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method SphereCastAll, addr 0x4869524, size 0xbc, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Ray  ray, float_t  radius, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method SphereCastNonAlloc, addr 0x486b6dc, size 0xbc, virtual false, abstract: false, final false
static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results) ;

/// @brief Method SphereCastNonAlloc, addr 0x486b620, size 0xbc, virtual false, abstract: false, final false
static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance) ;

/// @brief Method SphereCastNonAlloc, addr 0x486b558, size 0xc8, virtual false, abstract: false, final false
static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method SphereCastNonAlloc, addr 0x486b354, size 0xe4, virtual false, abstract: false, final false
static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method SphereCastNonAlloc, addr 0x486b9c8, size 0xb0, virtual false, abstract: false, final false
static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray  ray, float_t  radius, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results) ;

/// @brief Method SphereCastNonAlloc, addr 0x486b918, size 0xb0, virtual false, abstract: false, final false
static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray  ray, float_t  radius, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance) ;

/// @brief Method SphereCastNonAlloc, addr 0x486b864, size 0xb4, virtual false, abstract: false, final false
static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray  ray, float_t  radius, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method SphereCastNonAlloc, addr 0x486b798, size 0xcc, virtual false, abstract: false, final false
static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray  ray, float_t  radius, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method SyncTransforms, addr 0x486a124, size 0x28, virtual false, abstract: false, final false
static inline void SyncTransforms() ;

/// @brief Method TranslateTriangleIndex, addr 0x486dfb4, size 0x44, virtual false, abstract: false, final false
static inline uint32_t TranslateTriangleIndex(::System::IntPtr  shapePtr, uint32_t  rawIndex) ;

/// @brief Method TranslateTriangleIndexFromID, addr 0x486dff8, size 0x44, virtual false, abstract: false, final false
static inline uint32_t TranslateTriangleIndexFromID(int32_t  instanceID, uint32_t  faceIndex) ;

/// @brief Method .ctor, addr 0x486f008, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_ContactEvent, addr 0x486e6bc, size 0xdc, virtual false, abstract: false, final false
static inline void add_ContactEvent(::UnityEngine::__Physics__ContactEventDelegate*  value) ;

/// @brief Method add_ContactModifyEvent, addr 0x4863cd4, size 0xf0, virtual false, abstract: false, final false
static inline void add_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value) ;

/// @brief Method add_ContactModifyEventCCD, addr 0x4863eb4, size 0xf4, virtual false, abstract: false, final false
static inline void add_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value) ;

static inline ::UnityEngine::__Physics__ContactEventDelegate* getStaticF_ContactEvent() ;

static inline ::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* getStaticF_ContactModifyEvent() ;

static inline ::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* getStaticF_ContactModifyEventCCD() ;

static inline ::UnityEngine::Collision* getStaticF_s_ReusableCollision() ;

/// @brief Method get_autoSimulation, addr 0x486e5c8, size 0x78, virtual false, abstract: false, final false
static inline bool get_autoSimulation() ;

/// @brief Method get_autoSyncTransforms, addr 0x486a14c, size 0x28, virtual false, abstract: false, final false
static inline bool get_autoSyncTransforms() ;

/// @brief Method get_bounceThreshold, addr 0x4864490, size 0x28, virtual false, abstract: false, final false
static inline float_t get_bounceThreshold() ;

/// @brief Method get_bounceTreshold, addr 0x486e300, size 0x68, virtual false, abstract: false, final false
static inline float_t get_bounceTreshold() ;

/// @brief Method get_clothGravity, addr 0x486a7c4, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_clothGravity() ;

/// @brief Method get_clothGravity_Injected, addr 0x486a850, size 0x3c, virtual false, abstract: false, final false
static inline void get_clothGravity_Injected(ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_defaultContactOffset, addr 0x4864308, size 0x28, virtual false, abstract: false, final false
static inline float_t get_defaultContactOffset() ;

/// @brief Method get_defaultMaxAngularSpeed, addr 0x486467c, size 0x28, virtual false, abstract: false, final false
static inline float_t get_defaultMaxAngularSpeed() ;

/// @brief Method get_defaultMaxDepenetrationVelocity, addr 0x48644f0, size 0x28, virtual false, abstract: false, final false
static inline float_t get_defaultMaxDepenetrationVelocity() ;

/// @brief Method get_defaultPhysicsScene, addr 0x48647a4, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::PhysicsScene get_defaultPhysicsScene() ;

/// @brief Method get_defaultPhysicsScene_Injected, addr 0x4864820, size 0x3c, virtual false, abstract: false, final false
static inline void get_defaultPhysicsScene_Injected(ByRef<::UnityEngine::PhysicsScene>  ret) ;

/// @brief Method get_defaultSolverIterations, addr 0x4864550, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_defaultSolverIterations() ;

/// @brief Method get_defaultSolverVelocityIterations, addr 0x48645b4, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_defaultSolverVelocityIterations() ;

/// @brief Method get_gravity, addr 0x4864180, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_gravity() ;

/// @brief Method get_gravity_Injected, addr 0x486420c, size 0x3c, virtual false, abstract: false, final false
static inline void get_gravity_Injected(ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_improvedPatchFriction, addr 0x48646dc, size 0x28, virtual false, abstract: false, final false
static inline bool get_improvedPatchFriction() ;

/// @brief Method get_interCollisionDistance, addr 0x486a6a0, size 0x28, virtual false, abstract: false, final false
static inline float_t get_interCollisionDistance() ;

/// @brief Method get_interCollisionSettingsToggle, addr 0x486a760, size 0x28, virtual false, abstract: false, final false
static inline bool get_interCollisionSettingsToggle() ;

/// @brief Method get_interCollisionStiffness, addr 0x486a700, size 0x28, virtual false, abstract: false, final false
static inline float_t get_interCollisionStiffness() ;

/// @brief Method get_invokeCollisionCallbacks, addr 0x4864740, size 0x28, virtual false, abstract: false, final false
static inline bool get_invokeCollisionCallbacks() ;

/// @brief Method get_maxAngularVelocity, addr 0x486e3f8, size 0x8, virtual false, abstract: false, final false
static inline float_t get_maxAngularVelocity() ;

/// @brief Method get_minPenetrationForPenalty, addr 0x486e2f4, size 0x8, virtual false, abstract: false, final false
static inline float_t get_minPenetrationForPenalty() ;

/// @brief Method get_penetrationPenaltyForce, addr 0x486e5bc, size 0x8, virtual false, abstract: false, final false
static inline float_t get_penetrationPenaltyForce() ;

/// @brief Method get_queriesHitBackfaces, addr 0x486442c, size 0x28, virtual false, abstract: false, final false
static inline bool get_queriesHitBackfaces() ;

/// @brief Method get_queriesHitTriggers, addr 0x48643c8, size 0x28, virtual false, abstract: false, final false
static inline bool get_queriesHitTriggers() ;

/// @brief Method get_reuseCollisionCallbacks, addr 0x486a1b0, size 0x28, virtual false, abstract: false, final false
static inline bool get_reuseCollisionCallbacks() ;

/// @brief Method get_simulationMode, addr 0x4864618, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::SimulationMode get_simulationMode() ;

/// @brief Method get_sleepAngularVelocity, addr 0x486e3ec, size 0x8, virtual false, abstract: false, final false
static inline float_t get_sleepAngularVelocity() ;

/// @brief Method get_sleepThreshold, addr 0x4864368, size 0x28, virtual false, abstract: false, final false
static inline float_t get_sleepThreshold() ;

/// @brief Method get_sleepVelocity, addr 0x486e3e0, size 0x8, virtual false, abstract: false, final false
static inline float_t get_sleepVelocity() ;

/// @brief Method get_solverIterationCount, addr 0x486e404, size 0x68, virtual false, abstract: false, final false
static inline int32_t get_solverIterationCount() ;

/// @brief Method get_solverVelocityIterationCount, addr 0x486e4e0, size 0x68, virtual false, abstract: false, final false
static inline int32_t get_solverVelocityIterationCount() ;

/// @brief Method remove_ContactEvent, addr 0x486e798, size 0xdc, virtual false, abstract: false, final false
static inline void remove_ContactEvent(::UnityEngine::__Physics__ContactEventDelegate*  value) ;

/// @brief Method remove_ContactModifyEvent, addr 0x4863dc4, size 0xf0, virtual false, abstract: false, final false
static inline void remove_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value) ;

/// @brief Method remove_ContactModifyEventCCD, addr 0x4863fa8, size 0xf4, virtual false, abstract: false, final false
static inline void remove_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value) ;

static inline void setStaticF_ContactEvent(::UnityEngine::__Physics__ContactEventDelegate*  value) ;

static inline void setStaticF_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value) ;

static inline void setStaticF_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value) ;

static inline void setStaticF_s_ReusableCollision(::UnityEngine::Collision*  value) ;

/// @brief Method set_autoSimulation, addr 0x486e640, size 0x7c, virtual false, abstract: false, final false
static inline void set_autoSimulation(bool  value) ;

/// @brief Method set_autoSyncTransforms, addr 0x486a174, size 0x3c, virtual false, abstract: false, final false
static inline void set_autoSyncTransforms(bool  value) ;

/// @brief Method set_bounceThreshold, addr 0x48644b8, size 0x38, virtual false, abstract: false, final false
static inline void set_bounceThreshold(float_t  value) ;

/// @brief Method set_bounceTreshold, addr 0x486e368, size 0x78, virtual false, abstract: false, final false
static inline void set_bounceTreshold(float_t  value) ;

/// @brief Method set_clothGravity, addr 0x486a88c, size 0x84, virtual false, abstract: false, final false
static inline void set_clothGravity(::UnityEngine::Vector3  value) ;

/// @brief Method set_clothGravity_Injected, addr 0x486a910, size 0x3c, virtual false, abstract: false, final false
static inline void set_clothGravity_Injected(ByRef<::UnityEngine::Vector3>  value) ;

/// @brief Method set_defaultContactOffset, addr 0x4864330, size 0x38, virtual false, abstract: false, final false
static inline void set_defaultContactOffset(float_t  value) ;

/// @brief Method set_defaultMaxAngularSpeed, addr 0x48646a4, size 0x38, virtual false, abstract: false, final false
static inline void set_defaultMaxAngularSpeed(float_t  value) ;

/// @brief Method set_defaultMaxDepenetrationVelocity, addr 0x4864518, size 0x38, virtual false, abstract: false, final false
static inline void set_defaultMaxDepenetrationVelocity(float_t  value) ;

/// @brief Method set_defaultSolverIterations, addr 0x4864578, size 0x3c, virtual false, abstract: false, final false
static inline void set_defaultSolverIterations(int32_t  value) ;

/// @brief Method set_defaultSolverVelocityIterations, addr 0x48645dc, size 0x3c, virtual false, abstract: false, final false
static inline void set_defaultSolverVelocityIterations(int32_t  value) ;

/// @brief Method set_gravity, addr 0x4864248, size 0x84, virtual false, abstract: false, final false
static inline void set_gravity(::UnityEngine::Vector3  value) ;

/// @brief Method set_gravity_Injected, addr 0x48642cc, size 0x3c, virtual false, abstract: false, final false
static inline void set_gravity_Injected(ByRef<::UnityEngine::Vector3>  value) ;

/// @brief Method set_improvedPatchFriction, addr 0x4864704, size 0x3c, virtual false, abstract: false, final false
static inline void set_improvedPatchFriction(bool  value) ;

/// @brief Method set_interCollisionDistance, addr 0x486a6c8, size 0x38, virtual false, abstract: false, final false
static inline void set_interCollisionDistance(float_t  value) ;

/// @brief Method set_interCollisionSettingsToggle, addr 0x486a788, size 0x3c, virtual false, abstract: false, final false
static inline void set_interCollisionSettingsToggle(bool  value) ;

/// @brief Method set_interCollisionStiffness, addr 0x486a728, size 0x38, virtual false, abstract: false, final false
static inline void set_interCollisionStiffness(float_t  value) ;

/// @brief Method set_invokeCollisionCallbacks, addr 0x4864768, size 0x3c, virtual false, abstract: false, final false
static inline void set_invokeCollisionCallbacks(bool  value) ;

/// @brief Method set_maxAngularVelocity, addr 0x486e400, size 0x4, virtual false, abstract: false, final false
static inline void set_maxAngularVelocity(float_t  value) ;

/// @brief Method set_minPenetrationForPenalty, addr 0x486e2fc, size 0x4, virtual false, abstract: false, final false
static inline void set_minPenetrationForPenalty(float_t  value) ;

/// @brief Method set_penetrationPenaltyForce, addr 0x486e5c4, size 0x4, virtual false, abstract: false, final false
static inline void set_penetrationPenaltyForce(float_t  value) ;

/// @brief Method set_queriesHitBackfaces, addr 0x4864454, size 0x3c, virtual false, abstract: false, final false
static inline void set_queriesHitBackfaces(bool  value) ;

/// @brief Method set_queriesHitTriggers, addr 0x48643f0, size 0x3c, virtual false, abstract: false, final false
static inline void set_queriesHitTriggers(bool  value) ;

/// @brief Method set_reuseCollisionCallbacks, addr 0x486a1d8, size 0x3c, virtual false, abstract: false, final false
static inline void set_reuseCollisionCallbacks(bool  value) ;

/// @brief Method set_simulationMode, addr 0x4864640, size 0x3c, virtual false, abstract: false, final false
static inline void set_simulationMode(::UnityEngine::SimulationMode  value) ;

/// @brief Method set_sleepAngularVelocity, addr 0x486e3f4, size 0x4, virtual false, abstract: false, final false
static inline void set_sleepAngularVelocity(float_t  value) ;

/// @brief Method set_sleepThreshold, addr 0x4864390, size 0x38, virtual false, abstract: false, final false
static inline void set_sleepThreshold(float_t  value) ;

/// @brief Method set_sleepVelocity, addr 0x486e3e8, size 0x4, virtual false, abstract: false, final false
static inline void set_sleepVelocity(float_t  value) ;

/// @brief Method set_solverIterationCount, addr 0x486e46c, size 0x74, virtual false, abstract: false, final false
static inline void set_solverIterationCount(int32_t  value) ;

/// @brief Method set_solverVelocityIterationCount, addr 0x486e548, size 0x74, virtual false, abstract: false, final false
static inline void set_solverVelocityIterationCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Physics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Physics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Physics(Physics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Physics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Physics(Physics const& ) = delete;

/// @brief Field AllLayers offset 0xffffffff size 0x4
static constexpr int32_t  AllLayers{static_cast<int32_t>(0xffffffff)};

/// @brief Field DefaultRaycastLayers offset 0xffffffff size 0x4
static constexpr int32_t  DefaultRaycastLayers{static_cast<int32_t>(0xfffffffb)};

/// @brief Field IgnoreRaycastLayer offset 0xffffffff size 0x4
static constexpr int32_t  IgnoreRaycastLayer{static_cast<int32_t>(0x4)};

/// @brief Field kAllLayers offset 0xffffffff size 0x4
static constexpr int32_t  kAllLayers{static_cast<int32_t>(0xffffffff)};

/// @brief Field kDefaultRaycastLayers offset 0xffffffff size 0x4
static constexpr int32_t  kDefaultRaycastLayers{static_cast<int32_t>(0xfffffffb)};

/// @brief Field kIgnoreRaycastLayer offset 0xffffffff size 0x4
static constexpr int32_t  kIgnoreRaycastLayer{static_cast<int32_t>(0x4)};

/// @brief Field k_MaxFloatMinusEpsilon offset 0xffffffff size 0x4
static constexpr float_t  k_MaxFloatMinusEpsilon{340282330000000000000000000000000000000.0};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Physics, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Physics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Physics*, "UnityEngine", "Physics");
NEED_NO_BOX(::UnityEngine::__Physics__ContactEventDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Physics__ContactEventDelegate*, "UnityEngine", "Physics/ContactEventDelegate");
