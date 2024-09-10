#pragma once
// IWYU pragma private; include "UnityEngine/Joint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Joint)
namespace UnityEngine {
class ArticulationBody;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Joint;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Joint);
// Type: UnityEngine::Joint
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Joint*
class CORDL_TYPE Joint : public ::UnityEngine::Component {
public:
// Declarations
 __declspec(property(get=get_anchor, put=set_anchor)) ::UnityEngine::Vector3  anchor;

 __declspec(property(get=get_autoConfigureConnectedAnchor, put=set_autoConfigureConnectedAnchor)) bool  autoConfigureConnectedAnchor;

 __declspec(property(get=get_axis, put=set_axis)) ::UnityEngine::Vector3  axis;

 __declspec(property(get=get_breakForce, put=set_breakForce)) float_t  breakForce;

 __declspec(property(get=get_breakTorque, put=set_breakTorque)) float_t  breakTorque;

 __declspec(property(get=get_connectedAnchor, put=set_connectedAnchor)) ::UnityEngine::Vector3  connectedAnchor;

 __declspec(property(get=get_connectedArticulationBody, put=set_connectedArticulationBody)) ::UnityW<::UnityEngine::ArticulationBody>  connectedArticulationBody;

 __declspec(property(get=get_connectedBody, put=set_connectedBody)) ::UnityW<::UnityEngine::Rigidbody>  connectedBody;

 __declspec(property(get=get_connectedMassScale, put=set_connectedMassScale)) float_t  connectedMassScale;

 __declspec(property(get=get_currentForce)) ::UnityEngine::Vector3  currentForce;

 __declspec(property(get=get_currentTorque)) ::UnityEngine::Vector3  currentTorque;

 __declspec(property(get=get_enableCollision, put=set_enableCollision)) bool  enableCollision;

 __declspec(property(get=get_enablePreprocessing, put=set_enablePreprocessing)) bool  enablePreprocessing;

 __declspec(property(get=get_massScale, put=set_massScale)) float_t  massScale;

/// @brief Method GetCurrentForces, addr 0x4875660, size 0x54, virtual false, abstract: false, final false
inline void GetCurrentForces(ByRef<::UnityEngine::Vector3>  linearForce, ByRef<::UnityEngine::Vector3>  angularForce) ;

static inline ::UnityEngine::Joint* New_ctor() ;

/// @brief Method .ctor, addr 0x4875824, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_anchor, addr 0x4875050, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_anchor() ;

/// @brief Method get_anchor_Injected, addr 0x48750ac, size 0x44, virtual false, abstract: false, final false
inline void get_anchor_Injected(ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_autoConfigureConnectedAnchor, addr 0x48752c0, size 0x3c, virtual false, abstract: false, final false
inline bool get_autoConfigureConnectedAnchor() ;

/// @brief Method get_axis, addr 0x4874f18, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_axis() ;

/// @brief Method get_axis_Injected, addr 0x4874f74, size 0x44, virtual false, abstract: false, final false
inline void get_axis_Injected(ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_breakForce, addr 0x4875340, size 0x3c, virtual false, abstract: false, final false
inline float_t get_breakForce() ;

/// @brief Method get_breakTorque, addr 0x48753c8, size 0x3c, virtual false, abstract: false, final false
inline float_t get_breakTorque() ;

/// @brief Method get_connectedAnchor, addr 0x4875188, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_connectedAnchor() ;

/// @brief Method get_connectedAnchor_Injected, addr 0x48751e4, size 0x44, virtual false, abstract: false, final false
inline void get_connectedAnchor_Injected(ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_connectedArticulationBody, addr 0x4874e98, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ArticulationBody> get_connectedArticulationBody() ;

/// @brief Method get_connectedBody, addr 0x4874e18, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rigidbody> get_connectedBody() ;

/// @brief Method get_connectedMassScale, addr 0x48755d8, size 0x3c, virtual false, abstract: false, final false
inline float_t get_connectedMassScale() ;

/// @brief Method get_currentForce, addr 0x48756b4, size 0xb8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_currentForce() ;

/// @brief Method get_currentTorque, addr 0x487576c, size 0xb8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_currentTorque() ;

/// @brief Method get_enableCollision, addr 0x4875450, size 0x3c, virtual false, abstract: false, final false
inline bool get_enableCollision() ;

/// @brief Method get_enablePreprocessing, addr 0x48754d0, size 0x3c, virtual false, abstract: false, final false
inline bool get_enablePreprocessing() ;

/// @brief Method get_massScale, addr 0x4875550, size 0x3c, virtual false, abstract: false, final false
inline float_t get_massScale() ;

/// @brief Method set_anchor, addr 0x48750f0, size 0x54, virtual false, abstract: false, final false
inline void set_anchor(::UnityEngine::Vector3  value) ;

/// @brief Method set_anchor_Injected, addr 0x4875144, size 0x44, virtual false, abstract: false, final false
inline void set_anchor_Injected(ByRef<::UnityEngine::Vector3>  value) ;

/// @brief Method set_autoConfigureConnectedAnchor, addr 0x48752fc, size 0x44, virtual false, abstract: false, final false
inline void set_autoConfigureConnectedAnchor(bool  value) ;

/// @brief Method set_axis, addr 0x4874fb8, size 0x54, virtual false, abstract: false, final false
inline void set_axis(::UnityEngine::Vector3  value) ;

/// @brief Method set_axis_Injected, addr 0x487500c, size 0x44, virtual false, abstract: false, final false
inline void set_axis_Injected(ByRef<::UnityEngine::Vector3>  value) ;

/// @brief Method set_breakForce, addr 0x487537c, size 0x4c, virtual false, abstract: false, final false
inline void set_breakForce(float_t  value) ;

/// @brief Method set_breakTorque, addr 0x4875404, size 0x4c, virtual false, abstract: false, final false
inline void set_breakTorque(float_t  value) ;

/// @brief Method set_connectedAnchor, addr 0x4875228, size 0x54, virtual false, abstract: false, final false
inline void set_connectedAnchor(::UnityEngine::Vector3  value) ;

/// @brief Method set_connectedAnchor_Injected, addr 0x487527c, size 0x44, virtual false, abstract: false, final false
inline void set_connectedAnchor_Injected(ByRef<::UnityEngine::Vector3>  value) ;

/// @brief Method set_connectedArticulationBody, addr 0x4874ed4, size 0x44, virtual false, abstract: false, final false
inline void set_connectedArticulationBody(::UnityEngine::ArticulationBody*  value) ;

/// @brief Method set_connectedBody, addr 0x4874e54, size 0x44, virtual false, abstract: false, final false
inline void set_connectedBody(::UnityEngine::Rigidbody*  value) ;

/// @brief Method set_connectedMassScale, addr 0x4875614, size 0x4c, virtual false, abstract: false, final false
inline void set_connectedMassScale(float_t  value) ;

/// @brief Method set_enableCollision, addr 0x487548c, size 0x44, virtual false, abstract: false, final false
inline void set_enableCollision(bool  value) ;

/// @brief Method set_enablePreprocessing, addr 0x487550c, size 0x44, virtual false, abstract: false, final false
inline void set_enablePreprocessing(bool  value) ;

/// @brief Method set_massScale, addr 0x487558c, size 0x4c, virtual false, abstract: false, final false
inline void set_massScale(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Joint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Joint", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Joint(Joint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Joint", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Joint(Joint const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Joint, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Joint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Joint*, "UnityEngine", "Joint");
