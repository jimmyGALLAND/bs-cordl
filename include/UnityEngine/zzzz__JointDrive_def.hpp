#pragma once
// IWYU pragma private; include "UnityEngine/JointDrive.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JointDrive)
namespace UnityEngine {
struct JointDriveMode;
}
// Forward declare root types
namespace UnityEngine {
struct JointDrive;
}
// Write type traits
MARK_VAL_T(::UnityEngine::JointDrive);
// Type: UnityEngine::JointDrive
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::JointDrive
struct CORDL_TYPE JointDrive {
public:
// Declarations
 __declspec(property(get=get_maximumForce, put=set_maximumForce)) float_t  maximumForce;

 __declspec(property(get=get_mode, put=set_mode)) ::UnityEngine::JointDriveMode  mode;

 __declspec(property(get=get_positionDamper, put=set_positionDamper)) float_t  positionDamper;

 __declspec(property(get=get_positionSpring, put=set_positionSpring)) float_t  positionSpring;

 __declspec(property(get=get_useAcceleration, put=set_useAcceleration)) bool  useAcceleration;

/// @brief Method get_maximumForce, addr 0x485f0a4, size 0x8, virtual false, abstract: false, final false
inline float_t get_maximumForce() ;

/// @brief Method get_mode, addr 0x485f0d0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::JointDriveMode get_mode() ;

/// @brief Method get_positionDamper, addr 0x485f094, size 0x8, virtual false, abstract: false, final false
inline float_t get_positionDamper() ;

/// @brief Method get_positionSpring, addr 0x485f084, size 0x8, virtual false, abstract: false, final false
inline float_t get_positionSpring() ;

/// @brief Method get_useAcceleration, addr 0x485f0b4, size 0x10, virtual false, abstract: false, final false
inline bool get_useAcceleration() ;

/// @brief Method set_maximumForce, addr 0x485f0ac, size 0x8, virtual false, abstract: false, final false
inline void set_maximumForce(float_t  value) ;

/// @brief Method set_mode, addr 0x485f0d8, size 0x4, virtual false, abstract: false, final false
inline void set_mode(::UnityEngine::JointDriveMode  value) ;

/// @brief Method set_positionDamper, addr 0x485f09c, size 0x8, virtual false, abstract: false, final false
inline void set_positionDamper(float_t  value) ;

/// @brief Method set_positionSpring, addr 0x485f08c, size 0x8, virtual false, abstract: false, final false
inline void set_positionSpring(float_t  value) ;

/// @brief Method set_useAcceleration, addr 0x485f0c4, size 0xc, virtual false, abstract: false, final false
inline void set_useAcceleration(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr JointDrive() ;

// Ctor Parameters [CppParam { name: "m_PositionSpring", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_PositionDamper", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_MaximumForce", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_UseAcceleration", ty: "int32_t", modifiers: "", def_value: None }]
constexpr JointDrive(float_t  m_PositionSpring, float_t  m_PositionDamper, float_t  m_MaximumForce, int32_t  m_UseAcceleration) noexcept;

/// @brief Field m_PositionSpring, offset: 0x0, size: 0x4, def value: None
 float_t  m_PositionSpring;

/// @brief Field m_PositionDamper, offset: 0x4, size: 0x4, def value: None
 float_t  m_PositionDamper;

/// @brief Field m_MaximumForce, offset: 0x8, size: 0x4, def value: None
 float_t  m_MaximumForce;

/// @brief Field m_UseAcceleration, offset: 0xc, size: 0x4, def value: None
 int32_t  m_UseAcceleration;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::JointDrive, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::JointDrive, m_PositionSpring) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::JointDrive, m_PositionDamper) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::JointDrive, m_MaximumForce) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::JointDrive, m_UseAcceleration) == 0xc, "Offset mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::JointDrive, "UnityEngine", "JointDrive");
