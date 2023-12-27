#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HapticState)
// Forward declare root types
namespace UnityEngine::InputSystem::XR::Haptics {
struct HapticState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::Haptics::HapticState);
// Type: UnityEngine.InputSystem.XR.Haptics::HapticState
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6343))
// CS Name: ::UnityEngine.InputSystem.XR.Haptics::HapticState
struct CORDL_TYPE HapticState {
public:
  // Declarations
  __declspec(property(get = get_samplesQueued, put = set_samplesQueued)) uint32_t samplesQueued;

  __declspec(property(get = get_samplesAvailable, put = set_samplesAvailable)) uint32_t samplesAvailable;

  /// @brief Method .ctor addr 0x2ac97c4 size 0x8 virtual false final false
  inline void _ctor(uint32_t samplesQueued, uint32_t samplesAvailable);

  /// @brief Method get_samplesQueued addr 0x2ac97cc size 0x8 virtual false final false
  inline uint32_t get_samplesQueued();

  /// @brief Method set_samplesQueued addr 0x2ac97d4 size 0x8 virtual false final false
  inline void set_samplesQueued(uint32_t value);

  /// @brief Method get_samplesAvailable addr 0x2ac97dc size 0x8 virtual false final false
  inline uint32_t get_samplesAvailable();

  /// @brief Method set_samplesAvailable addr 0x2ac97e4 size 0x8 virtual false final false
  inline void set_samplesAvailable(uint32_t value);

  // Ctor Parameters [CppParam { name: "_samplesQueued_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_samplesAvailable_k__BackingField", ty: "uint32_t",
  // modifiers: "", def_value: None }]
  constexpr HapticState(uint32_t _samplesQueued_k__BackingField, uint32_t _samplesAvailable_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HapticState();

  /// @brief Field <samplesQueued>k__BackingField, offset: 0x0, size: 0x4, def value: None
  uint32_t _samplesQueued_k__BackingField;

  /// @brief Field <samplesAvailable>k__BackingField, offset: 0x4, size: 0x4, def value: None
  uint32_t _samplesAvailable_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::Haptics::HapticState, 0x8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XR::Haptics
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Haptics::HapticState, "UnityEngine.InputSystem.XR.Haptics", "HapticState");
