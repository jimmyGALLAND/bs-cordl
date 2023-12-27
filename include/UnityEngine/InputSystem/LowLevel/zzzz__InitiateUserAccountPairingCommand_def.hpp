#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InitiateUserAccountPairingCommand)
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InitiateUserAccountPairingCommand__Result;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct __InitiateUserAccountPairingCommand__Result;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InitiateUserAccountPairingCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__InitiateUserAccountPairingCommand__Result);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand);
// Type: ::Result
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6467))
// CS Name: ::InitiateUserAccountPairingCommand::Result
struct CORDL_TYPE __InitiateUserAccountPairingCommand__Result {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InitiateUserAccountPairingCommand__Result_Unwrapped
  enum struct ____InitiateUserAccountPairingCommand__Result_Unwrapped : int32_t {
    __E_SuccessfullyInitiated = static_cast<int32_t>(0x1),
    __E_ErrorNotSupported = static_cast<int32_t>(0xffffffff),
    __E_ErrorAlreadyInProgress = static_cast<int32_t>(0xfffffffe),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InitiateUserAccountPairingCommand__Result_Unwrapped() const noexcept {
    return static_cast<____InitiateUserAccountPairingCommand__Result_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InitiateUserAccountPairingCommand__Result(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InitiateUserAccountPairingCommand__Result();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field SuccessfullyInitiated value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::LowLevel::__InitiateUserAccountPairingCommand__Result const SuccessfullyInitiated;

  /// @brief Field ErrorNotSupported value: static_cast<int32_t>(0xffffffff)
  static ::UnityEngine::InputSystem::LowLevel::__InitiateUserAccountPairingCommand__Result const ErrorNotSupported;

  /// @brief Field ErrorAlreadyInProgress value: static_cast<int32_t>(0xfffffffe)
  static ::UnityEngine::InputSystem::LowLevel::__InitiateUserAccountPairingCommand__Result const ErrorAlreadyInProgress;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__InitiateUserAccountPairingCommand__Result, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::InitiateUserAccountPairingCommand
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing: Some(0) }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6471))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6468))
// CS Name: ::UnityEngine.InputSystem.LowLevel::InitiateUserAccountPairingCommand
#pragma pack(push, 0)
struct CORDL_TYPE InitiateUserAccountPairingCommand {
public:
  // Declarations
  using Result = ::UnityEngine::InputSystem::LowLevel::__InitiateUserAccountPairingCommand__Result;

  /// @brief Field baseCommand, offset 0x0, size 0x8
  __declspec(property(get = __get_baseCommand, put = __set_baseCommand))::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand;

  __declspec(property(get = get_typeStatic))::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __get_baseCommand();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __get_baseCommand() const;

  constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value);

  /// @brief Method get_Type addr 0x2ae7630 size 0x30 virtual false final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type();

  /// @brief Method get_typeStatic addr 0x2ae7660 size 0x30 virtual true final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  /// @brief Method Create addr 0x2ae7690 size 0x34 virtual false final false
  static inline ::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand Create();

  // Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }]
  constexpr InitiateUserAccountPairingCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitiateUserAccountPairingCommand();

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
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field kSize offset 0xffffffff size 0x4
  static constexpr int32_t kSize{ static_cast<int32_t>(0x8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand, 0x8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__InitiateUserAccountPairingCommand__Result, "UnityEngine.InputSystem.LowLevel", "InitiateUserAccountPairingCommand/Result");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InitiateUserAccountPairingCommand, "UnityEngine.InputSystem.LowLevel", "InitiateUserAccountPairingCommand");
