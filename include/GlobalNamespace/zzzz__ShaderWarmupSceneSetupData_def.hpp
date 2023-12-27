#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
CORDL_MODULE_EXPORT(ShaderWarmupSceneSetupData)
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ShaderWarmupSceneSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ShaderWarmupSceneSetupData);
// Type: ::ShaderWarmupSceneSetupData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15408))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6057))
// CS Name: ::ShaderWarmupSceneSetupData*
class CORDL_TYPE ShaderWarmupSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field <nextScenesTransitionSetupData>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__nextScenesTransitionSetupData_k__BackingField,
                      put = __set__nextScenesTransitionSetupData_k__BackingField))::GlobalNamespace::ScenesTransitionSetupDataSO* _nextScenesTransitionSetupData_k__BackingField;

  __declspec(property(get = get_nextScenesTransitionSetupData, put = set_nextScenesTransitionSetupData))::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData;

  constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO*& __get__nextScenesTransitionSetupData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> const& __get__nextScenesTransitionSetupData_k__BackingField() const;

  constexpr void __set__nextScenesTransitionSetupData_k__BackingField(::GlobalNamespace::ScenesTransitionSetupDataSO* value);

  /// @brief Method get_nextScenesTransitionSetupData addr 0x231cdc4 size 0x8 virtual false final false
  inline ::GlobalNamespace::ScenesTransitionSetupDataSO* get_nextScenesTransitionSetupData();

  /// @brief Method set_nextScenesTransitionSetupData addr 0x231cdcc size 0x8 virtual false final false
  inline void set_nextScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO* value);

  static inline ::GlobalNamespace::ShaderWarmupSceneSetupData* New_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData);

  /// @brief Method .ctor addr 0x231cdd4 size 0x28 virtual false final false
  inline void _ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData);

  // Ctor Parameters [CppParam { name: "", ty: "ShaderWarmupSceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderWarmupSceneSetupData(ShaderWarmupSceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderWarmupSceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderWarmupSceneSetupData(ShaderWarmupSceneSetupData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderWarmupSceneSetupData();

public:
  /// @brief Field <nextScenesTransitionSetupData>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::ScenesTransitionSetupDataSO* ____nextScenesTransitionSetupData_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ShaderWarmupSceneSetupData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ShaderWarmupSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShaderWarmupSceneSetupData*, "", "ShaderWarmupSceneSetupData");
