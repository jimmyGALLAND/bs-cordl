#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GraphicsSettings)
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine::Rendering {
class RenderPipelineAsset;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GraphicsSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::GraphicsSettings);
// Type: UnityEngine.Rendering::GraphicsSettings
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10200))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10327))
// CS Name: ::UnityEngine.Rendering::GraphicsSettings*
class CORDL_TYPE GraphicsSettings : public ::UnityEngine::Object {
public:
  // Declarations
  /// @brief Method get_lightsUseLinearIntensity addr 0x2cebaf4 size 0x28 virtual false final false
  static inline bool get_lightsUseLinearIntensity();

  /// @brief Method get_renderPipelineAsset addr 0x2cebb1c size 0x4 virtual false final false
  static inline ::UnityEngine::Rendering::RenderPipelineAsset* get_renderPipelineAsset();

  /// @brief Method set_renderPipelineAsset addr 0x2cebbb0 size 0x3c virtual false final false
  static inline void set_renderPipelineAsset(::UnityEngine::Rendering::RenderPipelineAsset* value);

  /// @brief Method get_INTERNAL_defaultRenderPipeline addr 0x2cebc28 size 0x28 virtual false final false
  static inline ::UnityEngine::ScriptableObject* get_INTERNAL_defaultRenderPipeline();

  /// @brief Method set_INTERNAL_defaultRenderPipeline addr 0x2cebc50 size 0x3c virtual false final false
  static inline void set_INTERNAL_defaultRenderPipeline(::UnityEngine::ScriptableObject* value);

  /// @brief Method get_defaultRenderPipeline addr 0x2cebb20 size 0x90 virtual false final false
  static inline ::UnityEngine::Rendering::RenderPipelineAsset* get_defaultRenderPipeline();

  /// @brief Method set_defaultRenderPipeline addr 0x2cebbec size 0x3c virtual false final false
  static inline void set_defaultRenderPipeline(::UnityEngine::Rendering::RenderPipelineAsset* value);

  // Ctor Parameters [CppParam { name: "", ty: "GraphicsSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphicsSettings(GraphicsSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphicsSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphicsSettings(GraphicsSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicsSettings();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GraphicsSettings, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::GraphicsSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GraphicsSettings*, "UnityEngine.Rendering", "GraphicsSettings");
