#pragma once
// IWYU pragma private; include "UnityEngine/ConstantForce.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(ConstantForce)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class ConstantForce;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ConstantForce);
// Type: UnityEngine::ConstantForce
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ConstantForce*
class CORDL_TYPE ConstantForce : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_force, put=set_force)) ::UnityEngine::Vector3  force;

 __declspec(property(get=get_relativeForce, put=set_relativeForce)) ::UnityEngine::Vector3  relativeForce;

 __declspec(property(get=get_relativeTorque, put=set_relativeTorque)) ::UnityEngine::Vector3  relativeTorque;

 __declspec(property(get=get_torque, put=set_torque)) ::UnityEngine::Vector3  torque;

static inline ::UnityEngine::ConstantForce* New_ctor() ;

/// @brief Method .ctor, addr 0x4874e10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_force, addr 0x4874930, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_force() ;

/// @brief Method get_force_Injected, addr 0x487498c, size 0x44, virtual false, abstract: false, final false
inline void get_force_Injected(ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_relativeForce, addr 0x4874a68, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_relativeForce() ;

/// @brief Method get_relativeForce_Injected, addr 0x4874ac4, size 0x44, virtual false, abstract: false, final false
inline void get_relativeForce_Injected(ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_relativeTorque, addr 0x4874cd8, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_relativeTorque() ;

/// @brief Method get_relativeTorque_Injected, addr 0x4874d34, size 0x44, virtual false, abstract: false, final false
inline void get_relativeTorque_Injected(ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_torque, addr 0x4874ba0, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_torque() ;

/// @brief Method get_torque_Injected, addr 0x4874bfc, size 0x44, virtual false, abstract: false, final false
inline void get_torque_Injected(ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method set_force, addr 0x48749d0, size 0x54, virtual false, abstract: false, final false
inline void set_force(::UnityEngine::Vector3  value) ;

/// @brief Method set_force_Injected, addr 0x4874a24, size 0x44, virtual false, abstract: false, final false
inline void set_force_Injected(ByRef<::UnityEngine::Vector3>  value) ;

/// @brief Method set_relativeForce, addr 0x4874b08, size 0x54, virtual false, abstract: false, final false
inline void set_relativeForce(::UnityEngine::Vector3  value) ;

/// @brief Method set_relativeForce_Injected, addr 0x4874b5c, size 0x44, virtual false, abstract: false, final false
inline void set_relativeForce_Injected(ByRef<::UnityEngine::Vector3>  value) ;

/// @brief Method set_relativeTorque, addr 0x4874d78, size 0x54, virtual false, abstract: false, final false
inline void set_relativeTorque(::UnityEngine::Vector3  value) ;

/// @brief Method set_relativeTorque_Injected, addr 0x4874dcc, size 0x44, virtual false, abstract: false, final false
inline void set_relativeTorque_Injected(ByRef<::UnityEngine::Vector3>  value) ;

/// @brief Method set_torque, addr 0x4874c40, size 0x54, virtual false, abstract: false, final false
inline void set_torque(::UnityEngine::Vector3  value) ;

/// @brief Method set_torque_Injected, addr 0x4874c94, size 0x44, virtual false, abstract: false, final false
inline void set_torque_Injected(ByRef<::UnityEngine::Vector3>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConstantForce() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConstantForce", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConstantForce(ConstantForce && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConstantForce", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConstantForce(ConstantForce const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ConstantForce, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::ConstantForce);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ConstantForce*, "UnityEngine", "ConstantForce");
