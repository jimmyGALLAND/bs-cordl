#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/LinearAccelerationState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LinearAccelerationState)
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct LinearAccelerationState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::LinearAccelerationState);
// Type: UnityEngine.InputSystem.LowLevel::LinearAccelerationState
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.LowLevel::LinearAccelerationState
struct CORDL_TYPE LinearAccelerationState {
public:
// Declarations
 __declspec(property(get=get_format)) ::UnityEngine::InputSystem::Utilities::FourCC  format;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() ;

/// @brief Method get_format, addr 0x4576e4c, size 0x30, virtual true, abstract: false, final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_format() ;

/// @brief Method get_kFormat, addr 0x4576e1c, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_kFormat() ;

/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo() ;

// Ctor Parameters []
// @brief default ctor
constexpr LinearAccelerationState() ;

// Ctor Parameters [CppParam { name: "acceleration", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr LinearAccelerationState(::UnityEngine::Vector3  acceleration) noexcept;

/// @brief Field acceleration, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  acceleration;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::LinearAccelerationState, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::LinearAccelerationState, acceleration) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::LinearAccelerationState, "UnityEngine.InputSystem.LowLevel", "LinearAccelerationState");
