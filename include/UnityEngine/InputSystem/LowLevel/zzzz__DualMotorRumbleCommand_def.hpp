#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/DualMotorRumbleCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DualMotorRumbleCommand)
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct DualMotorRumbleCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand);
// Type: UnityEngine.InputSystem.LowLevel::DualMotorRumbleCommand
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, packing: None, specified_packing: Some(0) }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.LowLevel::DualMotorRumbleCommand
#pragma pack(push, 0)
struct CORDL_TYPE DualMotorRumbleCommand {
public:
// Declarations
/// @brief Field baseCommand, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseCommand, put=__cordl_internal_set_baseCommand)) ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand;

/// @brief Field highFrequencyMotorSpeed, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_highFrequencyMotorSpeed, put=__cordl_internal_set_highFrequencyMotorSpeed)) float_t  highFrequencyMotorSpeed;

/// @brief Field lowFrequencyMotorSpeed, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lowFrequencyMotorSpeed, put=__cordl_internal_set_lowFrequencyMotorSpeed)) float_t  lowFrequencyMotorSpeed;

 __declspec(property(get=get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC  typeStatic;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() ;

/// @brief Method Create, addr 0x4575338, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand Create(float_t  lowFrequency, float_t  highFrequency) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __cordl_internal_get_baseCommand() const;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __cordl_internal_get_baseCommand() ;

constexpr float_t const& __cordl_internal_get_highFrequencyMotorSpeed() const;

constexpr float_t& __cordl_internal_get_highFrequencyMotorSpeed() ;

constexpr float_t const& __cordl_internal_get_lowFrequencyMotorSpeed() const;

constexpr float_t& __cordl_internal_get_lowFrequencyMotorSpeed() ;

constexpr void __cordl_internal_set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  value) ;

constexpr void __cordl_internal_set_highFrequencyMotorSpeed(float_t  value) ;

constexpr void __cordl_internal_set_lowFrequencyMotorSpeed(float_t  value) ;

/// @brief Method get_Type, addr 0x457690c, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_typeStatic, addr 0x457693c, size 0x30, virtual true, abstract: false, final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo* i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo() ;

// Ctor Parameters []
// @brief default ctor
constexpr DualMotorRumbleCommand() ;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "lowFrequencyMotorSpeed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "highFrequencyMotorSpeed", ty: "float_t", modifiers: "", def_value: None }]
constexpr DualMotorRumbleCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand, float_t  lowFrequencyMotorSpeed, float_t  highFrequencyMotorSpeed) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___baseCommand_padding[0x0];
/// @brief Field baseCommand, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  ___baseCommand;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___baseCommand_padding_forAlignment[0x0];
/// @brief Field baseCommand, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  ___baseCommand_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___lowFrequencyMotorSpeed_padding[0x8];
/// @brief Field lowFrequencyMotorSpeed, offset: 0x8, size: 0x4, def value: None
 float_t  ___lowFrequencyMotorSpeed;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___lowFrequencyMotorSpeed_padding_forAlignment[0x8];
/// @brief Field lowFrequencyMotorSpeed, offset: 0x8, size: 0x4, def value: None
 float_t  ___lowFrequencyMotorSpeed_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___highFrequencyMotorSpeed_padding[0xc];
/// @brief Field highFrequencyMotorSpeed, offset: 0xc, size: 0x4, def value: None
 float_t  ___highFrequencyMotorSpeed;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___highFrequencyMotorSpeed_padding_forAlignment[0xc];
/// @brief Field highFrequencyMotorSpeed, offset: 0xc, size: 0x4, def value: None
 float_t  ___highFrequencyMotorSpeed_forAlignment;
};
};
public:

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field kSize offset 0xffffffff size 0x4
static constexpr int32_t  kSize{static_cast<int32_t>(0x10)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand, "UnityEngine.InputSystem.LowLevel", "DualMotorRumbleCommand");
