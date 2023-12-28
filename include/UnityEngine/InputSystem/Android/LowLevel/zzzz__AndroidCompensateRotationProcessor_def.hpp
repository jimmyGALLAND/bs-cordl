#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Processors/zzzz__CompensateRotationProcessor_def.hpp"
CORDL_MODULE_EXPORT(AndroidCompensateRotationProcessor)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
class AndroidCompensateRotationProcessor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor);
// Type: UnityEngine.InputSystem.Android.LowLevel::AndroidCompensateRotationProcessor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6583))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6459))
// CS Name: ::UnityEngine.InputSystem.Android.LowLevel::AndroidCompensateRotationProcessor*
class CORDL_TYPE AndroidCompensateRotationProcessor : public ::UnityEngine::InputSystem::Processors::CompensateRotationProcessor {
public:
  // Declarations
  /// @brief Method Process addr 0x2ae6f64 size 0x34 virtual true final false
  inline ::UnityEngine::Quaternion Process(::UnityEngine::Quaternion value, ::UnityEngine::InputSystem::InputControl* control);

  static inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor* New_ctor();

  /// @brief Method .ctor addr 0x2ae6f98 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AndroidCompensateRotationProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidCompensateRotationProcessor(AndroidCompensateRotationProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidCompensateRotationProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidCompensateRotationProcessor(AndroidCompensateRotationProcessor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidCompensateRotationProcessor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor*, "UnityEngine.InputSystem.Android.LowLevel", "AndroidCompensateRotationProcessor");
