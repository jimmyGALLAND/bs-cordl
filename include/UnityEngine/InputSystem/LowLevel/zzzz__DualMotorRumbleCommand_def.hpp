#pragma once
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
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct DualMotorRumbleCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand);
// Type: UnityEngine.InputSystem.LowLevel::DualMotorRumbleCommand
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing: Some(0) }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6471))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6494))
// CS Name: ::UnityEngine.InputSystem.LowLevel::DualMotorRumbleCommand
#pragma pack(push, 0)
struct CORDL_TYPE DualMotorRumbleCommand {
public:
  // Declarations
  /// @brief Field baseCommand, offset 0x0, size 0x8
  __declspec(property(get = __get_baseCommand, put = __set_baseCommand))::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand;

  /// @brief Field lowFrequencyMotorSpeed, offset 0x8, size 0x4
  __declspec(property(get = __get_lowFrequencyMotorSpeed, put = __set_lowFrequencyMotorSpeed)) float_t lowFrequencyMotorSpeed;

  /// @brief Field highFrequencyMotorSpeed, offset 0xc, size 0x4
  __declspec(property(get = __get_highFrequencyMotorSpeed, put = __set_highFrequencyMotorSpeed)) float_t highFrequencyMotorSpeed;

  __declspec(property(get = get_typeStatic))::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __get_baseCommand();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __get_baseCommand() const;

  constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value);

  constexpr float_t& __get_lowFrequencyMotorSpeed();

  constexpr float_t const& __get_lowFrequencyMotorSpeed() const;

  constexpr void __set_lowFrequencyMotorSpeed(float_t value);

  constexpr float_t& __get_highFrequencyMotorSpeed();

  constexpr float_t const& __get_highFrequencyMotorSpeed() const;

  constexpr void __set_highFrequencyMotorSpeed(float_t value);

  /// @brief Method get_Type addr 0x2ae87f0 size 0x30 virtual false final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type();

  /// @brief Method get_typeStatic addr 0x2ae8820 size 0x30 virtual true final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  /// @brief Method Create addr 0x2ae7188 size 0x50 virtual false final false
  static inline ::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand Create(float_t lowFrequency, float_t highFrequency);

  // Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "lowFrequencyMotorSpeed", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "highFrequencyMotorSpeed", ty: "float_t", modifiers: "", def_value: None }]
  constexpr DualMotorRumbleCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, float_t lowFrequencyMotorSpeed, float_t highFrequencyMotorSpeed) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr DualMotorRumbleCommand();

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___baseCommand_padding[0x0];
      /// @brief Field baseCommand, offset: 0x0, size: 0x8, def value: None
      ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand ___baseCommand;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___baseCommand_padding_forAlignment[0x0];
      /// @brief Field baseCommand, offset: 0x0, size: 0x8, def value: None
      ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand ___baseCommand_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___lowFrequencyMotorSpeed_padding[0x8];
      /// @brief Field lowFrequencyMotorSpeed, offset: 0x8, size: 0x4, def value: None
      float_t ___lowFrequencyMotorSpeed;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___lowFrequencyMotorSpeed_padding_forAlignment[0x8];
      /// @brief Field lowFrequencyMotorSpeed, offset: 0x8, size: 0x4, def value: None
      float_t ___lowFrequencyMotorSpeed_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___highFrequencyMotorSpeed_padding[0xc];
      /// @brief Field highFrequencyMotorSpeed, offset: 0xc, size: 0x4, def value: None
      float_t ___highFrequencyMotorSpeed;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___highFrequencyMotorSpeed_padding_forAlignment[0xc];
      /// @brief Field highFrequencyMotorSpeed, offset: 0xc, size: 0x4, def value: None
      float_t ___highFrequencyMotorSpeed_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field kSize offset 0xffffffff size 0x4
  static constexpr int32_t kSize{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand, "UnityEngine.InputSystem.LowLevel", "DualMotorRumbleCommand");
