#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(HealthWarningSceneSetup)
namespace GlobalNamespace {
class HealthWarningSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class HealthWarningSceneSetup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HealthWarningSceneSetup);
// Type: ::HealthWarningSceneSetup
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6032))
// CS Name: ::HealthWarningSceneSetup*
class CORDL_TYPE HealthWarningSceneSetup : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _sceneSetupData, offset 0x20, size 0x8
  __declspec(property(get = __get__sceneSetupData, put = __set__sceneSetupData))::GlobalNamespace::HealthWarningSceneSetupData* _sceneSetupData;

  constexpr ::GlobalNamespace::HealthWarningSceneSetupData*& __get__sceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HealthWarningSceneSetupData*> const& __get__sceneSetupData() const;

  constexpr void __set__sceneSetupData(::GlobalNamespace::HealthWarningSceneSetupData* value);

  /// @brief Method InstallBindings addr 0x2319d08 size 0x15c virtual true final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::HealthWarningSceneSetup* New_ctor();

  /// @brief Method .ctor addr 0x2319e64 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HealthWarningSceneSetup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HealthWarningSceneSetup(HealthWarningSceneSetup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HealthWarningSceneSetup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HealthWarningSceneSetup(HealthWarningSceneSetup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthWarningSceneSetup();

public:
  /// @brief Field _sceneSetupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::HealthWarningSceneSetupData* ____sceneSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningSceneSetup, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HealthWarningSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningSceneSetup*, "", "HealthWarningSceneSetup");
